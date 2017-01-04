#include <iterator>
#include <iostream>
#include <vector>
#include <Rcpp.h>

#include "rpeaks.h"

using Rcpp::NumericVector;

//' detect the R-peaks in a ecg signal
//'
//' @param input A numeric vector representing the ecg
//' @return a numeric vector with the indices of the R-peaks
//' @examples data(ecg)
//' plot(ecg, type="l", xlim=c(10*200, 15*200))
//' abline(v = qrsdet(ecg), col=2, lty=2)
// [[Rcpp::export]]
NumericVector qrsdet(const NumericVector & input) {
  NumericVector output;
  int i = 0;
  ResetBDAC();
  for(NumericVector::const_iterator in = input.begin(); in != input.end(); ++in) {
    ++i;
    const int delay = QRSDet(static_cast<int>(*in), 0);
    const int pos = delay == 0 ? 0 : i - delay;
    if(pos > 0) {
      output.push_back(pos);
    }
  }
  return output;
}
