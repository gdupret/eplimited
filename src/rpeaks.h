#include <Rcpp.h>

#include "qrsdet.h"

/* http://stackoverflow.com/questions/17448014/how-to-use-c-code-in-c */

#ifndef __RPEAKSHPP__
#define __RPEAKSHPP__

#ifdef __cplusplus
extern "C"
{
#endif

  // C header here
  int QRSFilter(int datum, int init) ;
  int deriv1( int x0, int init ) ;
  int QRSDet( int datum, int init ) ;
  void ResetBDAC(void);

#ifdef __cplusplus
}
#endif

Rcpp::NumericVector qrsdet(const Rcpp::NumericVector & input);

#endif // __RPEAKSHPP__
