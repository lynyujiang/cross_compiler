/* -*- buffer-read-only: t -*-
   Generated automatically by parsecpu.awk from arm-cpus.in.
   Do not edit.

   Copyright (C) 2011-2019 Free Software Foundation, Inc.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 3,
   or (at your option) any later version.

   GCC is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public
   License along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */

static const cpu_tune all_tunes[] =
{
  { /* arm8.  */
    TARGET_CPU_arm8,
    (TF_LDSCHED),
    &arm_fastmul_tune
  },
  { /* arm810.  */
    TARGET_CPU_arm810,
    (TF_LDSCHED),
    &arm_fastmul_tune
  },
  { /* strongarm.  */
    TARGET_CPU_strongarm,
    (TF_LDSCHED | TF_STRONG),
    &arm_strongarm_tune
  },
  { /* fa526.  */
    TARGET_CPU_fa526,
    (TF_LDSCHED),
    &arm_fastmul_tune
  },
  { /* fa626.  */
    TARGET_CPU_fa626,
    (TF_LDSCHED),
    &arm_fastmul_tune
  },
  { /* arm7tdmi.  */
    TARGET_CPU_arm7tdmi,
    (TF_CO_PROC),
    &arm_fastmul_tune
  },
  { /* arm710t.  */
    TARGET_CPU_arm710t,
    (TF_WBUF),
    &arm_fastmul_tune
  },
  { /* arm9.  */
    TARGET_CPU_arm9,
    (TF_LDSCHED),
    &arm_fastmul_tune
  },
  { /* arm9tdmi.  */
    TARGET_CPU_arm9tdmi,
    (TF_LDSCHED),
    &arm_fastmul_tune
  },
  { /* arm920t.  */
    TARGET_CPU_arm920t,
    (TF_LDSCHED),
    &arm_fastmul_tune
  },
  { /* arm10tdmi.  */
    TARGET_CPU_arm10tdmi,
    (TF_LDSCHED),
    &arm_fastmul_tune
  },
  { /* arm9e.  */
    TARGET_CPU_arm9e,
    (TF_LDSCHED),
    &arm_9e_tune
  },
  { /* arm10e.  */
    TARGET_CPU_arm10e,
    (TF_LDSCHED),
    &arm_fastmul_tune
  },
  { /* xscale.  */
    TARGET_CPU_xscale,
    (TF_LDSCHED | TF_XSCALE),
    &arm_xscale_tune
  },
  { /* iwmmxt.  */
    TARGET_CPU_iwmmxt,
    (TF_LDSCHED | TF_XSCALE),
    &arm_xscale_tune
  },
  { /* iwmmxt2.  */
    TARGET_CPU_iwmmxt2,
    (TF_LDSCHED | TF_XSCALE),
    &arm_xscale_tune
  },
  { /* fa606te.  */
    TARGET_CPU_fa606te,
    (TF_LDSCHED),
    &arm_9e_tune
  },
  { /* fa626te.  */
    TARGET_CPU_fa626te,
    (TF_LDSCHED),
    &arm_9e_tune
  },
  { /* fmp626.  */
    TARGET_CPU_fmp626,
    (TF_LDSCHED),
    &arm_9e_tune
  },
  { /* fa726te.  */
    TARGET_CPU_fa726te,
    (TF_LDSCHED),
    &arm_fa726te_tune
  },
  { /* arm926ej-s.  */
    TARGET_CPU_arm926ejs,
    (TF_LDSCHED),
    &arm_9e_tune
  },
  { /* arm1026ej-s.  */
    TARGET_CPU_arm1026ejs,
    (TF_LDSCHED),
    &arm_9e_tune
  },
  { /* arm1136j-s.  */
    TARGET_CPU_arm1136js,
    (TF_LDSCHED),
    &arm_9e_tune
  },
  { /* arm1136jf-s.  */
    TARGET_CPU_arm1136jfs,
    (TF_LDSCHED),
    &arm_9e_tune
  },
  { /* arm1176jz-s.  */
    TARGET_CPU_arm1176jzs,
    (TF_LDSCHED),
    &arm_9e_tune
  },
  { /* arm1176jzf-s.  */
    TARGET_CPU_arm1176jzfs,
    (TF_LDSCHED),
    &arm_9e_tune
  },
  { /* mpcorenovfp.  */
    TARGET_CPU_mpcorenovfp,
    (TF_LDSCHED),
    &arm_9e_tune
  },
  { /* mpcore.  */
    TARGET_CPU_mpcore,
    (TF_LDSCHED),
    &arm_9e_tune
  },
  { /* arm1156t2-s.  */
    TARGET_CPU_arm1156t2s,
    (TF_LDSCHED),
    &arm_v6t2_tune
  },
  { /* arm1156t2f-s.  */
    TARGET_CPU_arm1156t2fs,
    (TF_LDSCHED),
    &arm_v6t2_tune
  },
  { /* cortex-m1.  */
    TARGET_CPU_cortexm1,
    (TF_LDSCHED),
    &arm_v6m_tune
  },
  { /* cortex-m0.  */
    TARGET_CPU_cortexm0,
    (TF_LDSCHED),
    &arm_v6m_tune
  },
  { /* cortex-m0plus.  */
    TARGET_CPU_cortexm0plus,
    (TF_LDSCHED),
    &arm_v6m_tune
  },
  { /* cortex-m1.small-multiply.  */
    TARGET_CPU_cortexm1,
    (TF_LDSCHED | TF_SMALLMUL),
    &arm_v6m_tune
  },
  { /* cortex-m0.small-multiply.  */
    TARGET_CPU_cortexm0,
    (TF_LDSCHED | TF_SMALLMUL),
    &arm_v6m_tune
  },
  { /* cortex-m0plus.small-multiply.  */
    TARGET_CPU_cortexm0plus,
    (TF_LDSCHED | TF_SMALLMUL),
    &arm_v6m_tune
  },
  { /* generic-armv7-a.  */
    TARGET_CPU_genericv7a,
    (TF_LDSCHED),
    &arm_cortex_tune
  },
  { /* cortex-a5.  */
    TARGET_CPU_cortexa5,
    (TF_LDSCHED),
    &arm_cortex_a5_tune
  },
  { /* cortex-a7.  */
    TARGET_CPU_cortexa7,
    (TF_LDSCHED),
    &arm_cortex_a7_tune
  },
  { /* cortex-a8.  */
    TARGET_CPU_cortexa8,
    (TF_LDSCHED),
    &arm_cortex_a8_tune
  },
  { /* cortex-a9.  */
    TARGET_CPU_cortexa9,
    (TF_LDSCHED),
    &arm_cortex_a9_tune
  },
  { /* cortex-a12.  */
    TARGET_CPU_cortexa17,
    (TF_LDSCHED),
    &arm_cortex_a12_tune
  },
  { /* cortex-a15.  */
    TARGET_CPU_cortexa15,
    (TF_LDSCHED),
    &arm_cortex_a15_tune
  },
  { /* cortex-a17.  */
    TARGET_CPU_cortexa17,
    (TF_LDSCHED),
    &arm_cortex_a12_tune
  },
  { /* cortex-r4.  */
    TARGET_CPU_cortexr4,
    (TF_LDSCHED),
    &arm_cortex_tune
  },
  { /* cortex-r4f.  */
    TARGET_CPU_cortexr4f,
    (TF_LDSCHED),
    &arm_cortex_tune
  },
  { /* cortex-r5.  */
    TARGET_CPU_cortexr5,
    (TF_LDSCHED),
    &arm_cortex_tune
  },
  { /* cortex-r7.  */
    TARGET_CPU_cortexr7,
    (TF_LDSCHED),
    &arm_cortex_tune
  },
  { /* cortex-r8.  */
    TARGET_CPU_cortexr7,
    (TF_LDSCHED),
    &arm_cortex_tune
  },
  { /* cortex-m7.  */
    TARGET_CPU_cortexm7,
    (TF_LDSCHED),
    &arm_cortex_m7_tune
  },
  { /* cortex-m4.  */
    TARGET_CPU_cortexm4,
    (TF_LDSCHED),
    &arm_v7m_tune
  },
  { /* cortex-m3.  */
    TARGET_CPU_cortexm3,
    (TF_LDSCHED),
    &arm_v7m_tune
  },
  { /* marvell-pj4.  */
    TARGET_CPU_marvell_pj4,
    (TF_LDSCHED),
    &arm_marvell_pj4_tune
  },
  { /* cortex-a15.cortex-a7.  */
    TARGET_CPU_cortexa7,
    (TF_LDSCHED),
    &arm_cortex_a15_tune
  },
  { /* cortex-a17.cortex-a7.  */
    TARGET_CPU_cortexa7,
    (TF_LDSCHED),
    &arm_cortex_a12_tune
  },
  { /* cortex-a32.  */
    TARGET_CPU_cortexa53,
    (TF_LDSCHED),
    &arm_cortex_a35_tune
  },
  { /* cortex-a35.  */
    TARGET_CPU_cortexa53,
    (TF_LDSCHED),
    &arm_cortex_a35_tune
  },
  { /* cortex-a53.  */
    TARGET_CPU_cortexa53,
    (TF_LDSCHED),
    &arm_cortex_a53_tune
  },
  { /* cortex-a57.  */
    TARGET_CPU_cortexa57,
    (TF_LDSCHED),
    &arm_cortex_a57_tune
  },
  { /* cortex-a72.  */
    TARGET_CPU_cortexa57,
    (TF_LDSCHED),
    &arm_cortex_a57_tune
  },
  { /* cortex-a73.  */
    TARGET_CPU_cortexa57,
    (TF_LDSCHED),
    &arm_cortex_a73_tune
  },
  { /* exynos-m1.  */
    TARGET_CPU_exynosm1,
    (TF_LDSCHED),
    &arm_exynosm1_tune
  },
  { /* xgene1.  */
    TARGET_CPU_xgene1,
    (TF_LDSCHED),
    &arm_xgene1_tune
  },
  { /* cortex-a57.cortex-a53.  */
    TARGET_CPU_cortexa53,
    (TF_LDSCHED),
    &arm_cortex_a57_tune
  },
  { /* cortex-a72.cortex-a53.  */
    TARGET_CPU_cortexa53,
    (TF_LDSCHED),
    &arm_cortex_a57_tune
  },
  { /* cortex-a73.cortex-a35.  */
    TARGET_CPU_cortexa53,
    (TF_LDSCHED),
    &arm_cortex_a73_tune
  },
  { /* cortex-a73.cortex-a53.  */
    TARGET_CPU_cortexa53,
    (TF_LDSCHED),
    &arm_cortex_a73_tune
  },
  { /* cortex-a55.  */
    TARGET_CPU_cortexa53,
    (TF_LDSCHED),
    &arm_cortex_a53_tune
  },
  { /* cortex-a75.  */
    TARGET_CPU_cortexa57,
    (TF_LDSCHED),
    &arm_cortex_a73_tune
  },
  { /* cortex-a76.  */
    TARGET_CPU_cortexa57,
    (TF_LDSCHED),
    &arm_cortex_a57_tune
  },
  { /* neoverse-n1.  */
    TARGET_CPU_cortexa57,
    (TF_LDSCHED),
    &arm_cortex_a57_tune
  },
  { /* cortex-a75.cortex-a55.  */
    TARGET_CPU_cortexa53,
    (TF_LDSCHED),
    &arm_cortex_a73_tune
  },
  { /* cortex-a76.cortex-a55.  */
    TARGET_CPU_cortexa53,
    (TF_LDSCHED),
    &arm_cortex_a57_tune
  },
  { /* cortex-m23.  */
    TARGET_CPU_cortexm23,
    (TF_LDSCHED),
    &arm_v6m_tune
  },
  { /* cortex-m33.  */
    TARGET_CPU_cortexm33,
    (TF_LDSCHED),
    &arm_v7m_tune
  },
  { /* cortex-r52.  */
    TARGET_CPU_cortexr52,
    (TF_LDSCHED),
    &arm_cortex_tune
  },
  {TARGET_CPU_arm_none, 0, NULL}
};
