// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// roll_eigen
List roll_eigen(const NumericMatrix& x, const int& width, const arma::vec& weights, const bool& center, const bool& scale, const int& min_obs, const bool& complete_obs, const bool& na_restore, const bool& online);
RcppExport SEXP _rollpca_roll_eigen(SEXP xSEXP, SEXP widthSEXP, SEXP weightsSEXP, SEXP centerSEXP, SEXP scaleSEXP, SEXP min_obsSEXP, SEXP complete_obsSEXP, SEXP na_restoreSEXP, SEXP onlineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type center(centerSEXP);
    Rcpp::traits::input_parameter< const bool& >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< const int& >::type min_obs(min_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type complete_obs(complete_obsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_restore(na_restoreSEXP);
    Rcpp::traits::input_parameter< const bool& >::type online(onlineSEXP);
    rcpp_result_gen = Rcpp::wrap(roll_eigen(x, width, weights, center, scale, min_obs, complete_obs, na_restore, online));
    return rcpp_result_gen;
END_RCPP
}
