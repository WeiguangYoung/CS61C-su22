#include <stdint.h>
#include <stdio.h>
#include "bit_ops.h"

/*
  Returns the n-th bit of x.
  Assumes 0 <= n <= 31.
*/
uint32_t get_bit(uint32_t x, uint32_t n)
{
  /* YOUR CODE HERE */
  x = x >> n;
  return x & 1;
}

/*
  Set the n-th bit of *x to v.
  Assumes 0 <= n <= 31, and v is 0 or 1.
*/
void set_bit(uint32_t *x, uint32_t n, uint32_t v)
{
  /* YOUR CODE HERE */
  // Set the n-th bit of *x to 0
  *x &= ~(1 << n);
  // The n-th value is 0|v
  *x |= v << n;
}

/*
  Flips the n-th bit of *x.
  Assumes 0 <= n <= 31.
*/
void flip_bit(uint32_t *x, uint32_t n)
{
  /* YOUR CODE HERE */
  *x ^= (1 << n);
}
