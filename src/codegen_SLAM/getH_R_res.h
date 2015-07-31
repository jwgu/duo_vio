//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: getH_R_res.h
//
// MATLAB Coder version            : 2.8
// C/C++ source code generated on  : 31-Jul-2015 14:58:50
//
#ifndef __GETH_R_RES_H__
#define __GETH_R_RES_H__

// Include Files
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "SLAM_types.h"

// Function Declarations
extern void b_getH_R_res(const emxArray_real_T *b_xt, double errorStateSize,
  double stateSize, const double z_all_l[64], const double indMeas_data[], const
  int indMeas_size[1], const emxArray_real_T *map, double c_numAnchors, double
  numPointsPerAnchor, const emxArray_real_T *anchorIdx, const emxArray_real_T
  *featureAnchorIdx, const emxArray_real_T *b_m_vect, const double imNoise[2],
  double r_data[], int r_size[1], emxArray_real_T *H, double h_u_data[], int
  h_u_size[1], double R_data[], int R_size[2]);
extern void getH_R_res(const emxArray_real_T *b_xt, double errorStateSize,
  double stateSize, const double z_all_l[64], double indMeas, const
  emxArray_real_T *map, double c_numAnchors, double numPointsPerAnchor, const
  emxArray_real_T *anchorIdx, const emxArray_real_T *featureAnchorIdx, const
  emxArray_real_T *b_m_vect, const double imNoise[2], double r[2],
  emxArray_real_T *H, double h_u[2], double R[4]);

#endif

//
// File trailer for getH_R_res.h
//
// [EOF]
//