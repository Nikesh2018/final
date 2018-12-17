/*-------------------------------------------------------------------
 * Simple standalone application which requires the GSL random number
 * generator.
 *
 *
 *--------------------------------------------------------------------
 * mytools.c: Support functions
 * 
 *--------------------------------------------------------------------*/

#include "mytools.h"

/* ------------------------------------------------
 * init_mytool(): initialize GSL to query RNG 
 * ------------------------------------------------*/

int init_mytool()
{

  _gsl_rng = gsl_rng_alloc(gsl_rng_mt19937); /* init specific rng */

  if(_gsl_rng == NULL)
    return 1;
  else
    return 0;

}

/* ------------------------------------------------
 * finalize_mytool(): cleanup GSL
 * ------------------------------------------------*/

void finalize_mytool()
{
  gsl_rng_free (_gsl_rng);
  return;

}

/* -----------------------------------------------------
 * get_random_number(): Use GSL to return random number
 * -----------------------------------------------------*/

double get_random_number()
{
  int ms = 1000 ;
  struct timespec timev = {ms/1000, ms%1000 * 1000000L};
  gsl_rng_set(_gsl_rng, time(NULL));
  nanosleep(&timev, (struct timespec *)NULL);

  return(gsl_rng_uniform (_gsl_rng));
  
}


