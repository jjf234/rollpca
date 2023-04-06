# rollpca

## Overview

`rollpca` is a package that provides analytical computation of rolling portfolio optimization for time-series data.

## Installation

Install the development version from GitHub:

``` r
# install.packages("devtools")
devtools::install_github("jjf234/rollpca")
```

## Usage

Load the package and supply a dataset:

``` r
library(roll) # (>= 1.1.7)
library(rollport)

n <- 15
m <- 3
x <- matrix(rnorm(n * m), nrow = n, ncol = m)
```
Then, to compute rolling eigenvalues and eigenvectors, use the `roll_eigen` function:

```r
# rolling portfolio optimization to minimize risk
roll_eigen(x, width = 5)
```

Note that handling of missing values is supported as well (see the `min_obs`, `complete_obs`, and `na_restore` arguments).