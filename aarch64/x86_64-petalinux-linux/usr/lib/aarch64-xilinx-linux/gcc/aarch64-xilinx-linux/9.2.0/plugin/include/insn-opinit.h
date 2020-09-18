/* Generated automatically by the program `genopinit'
   from the machine description file `md'.  */

#ifndef GCC_INSN_OPINIT_H
#define GCC_INSN_OPINIT_H 1
enum optab_tag {
  unknown_optab,
  sext_optab,
  trunc_optab,
  zext_optab,
  sfix_optab,
  ufix_optab,
  sfloat_optab,
  ufloat_optab,
  lrint_optab,
  lround_optab,
  lfloor_optab,
  lceil_optab,
  fract_optab,
  fractuns_optab,
  satfract_optab,
  satfractuns_optab,
  sfixtrunc_optab,
  ufixtrunc_optab,
  smul_widen_optab,
  umul_widen_optab,
  usmul_widen_optab,
  smadd_widen_optab,
  umadd_widen_optab,
  ssmadd_widen_optab,
  usmadd_widen_optab,
  smsub_widen_optab,
  umsub_widen_optab,
  ssmsub_widen_optab,
  usmsub_widen_optab,
  vec_load_lanes_optab,
  vec_store_lanes_optab,
  vec_mask_load_lanes_optab,
  vec_mask_store_lanes_optab,
  vcond_optab,
  vcondu_optab,
  vcondeq_optab,
  vcond_mask_optab,
  vec_cmp_optab,
  vec_cmpu_optab,
  vec_cmpeq_optab,
  maskload_optab,
  maskstore_optab,
  vec_extract_optab,
  vec_init_optab,
  while_ult_optab,
  add_optab,
  addv_optab,
  ssadd_optab,
  usadd_optab,
  sub_optab,
  subv_optab,
  sssub_optab,
  ussub_optab,
  smul_optab,
  smulv_optab,
  ssmul_optab,
  usmul_optab,
  sdiv_optab,
  sdivv_optab,
  ssdiv_optab,
  udiv_optab,
  usdiv_optab,
  sdivmod_optab,
  udivmod_optab,
  smod_optab,
  umod_optab,
  ftrunc_optab,
  and_optab,
  ior_optab,
  xor_optab,
  ashl_optab,
  ssashl_optab,
  usashl_optab,
  ashr_optab,
  lshr_optab,
  rotl_optab,
  rotr_optab,
  vashl_optab,
  vashr_optab,
  vlshr_optab,
  vrotl_optab,
  vrotr_optab,
  smin_optab,
  smax_optab,
  umin_optab,
  umax_optab,
  neg_optab,
  negv_optab,
  ssneg_optab,
  usneg_optab,
  abs_optab,
  absv_optab,
  one_cmpl_optab,
  bswap_optab,
  ffs_optab,
  clz_optab,
  ctz_optab,
  clrsb_optab,
  popcount_optab,
  parity_optab,
  cmp_optab,
  ucmp_optab,
  eq_optab,
  ne_optab,
  gt_optab,
  ge_optab,
  lt_optab,
  le_optab,
  unord_optab,
  powi_optab,
  sqrt_optab,
  sync_old_add_optab,
  sync_old_sub_optab,
  sync_old_ior_optab,
  sync_old_and_optab,
  sync_old_xor_optab,
  sync_old_nand_optab,
  sync_new_add_optab,
  sync_new_sub_optab,
  sync_new_ior_optab,
  sync_new_and_optab,
  sync_new_xor_optab,
  sync_new_nand_optab,
  sync_compare_and_swap_optab,
  sync_lock_test_and_set_optab,
  mov_optab,
  movstrict_optab,
  movmisalign_optab,
  storent_optab,
  insv_optab,
  extv_optab,
  extzv_optab,
  insvmisalign_optab,
  extvmisalign_optab,
  extzvmisalign_optab,
  push_optab,
  reload_in_optab,
  reload_out_optab,
  cbranch_optab,
  addcc_optab,
  negcc_optab,
  notcc_optab,
  movcc_optab,
  cond_add_optab,
  cond_sub_optab,
  cond_smul_optab,
  cond_sdiv_optab,
  cond_smod_optab,
  cond_udiv_optab,
  cond_umod_optab,
  cond_and_optab,
  cond_ior_optab,
  cond_xor_optab,
  cond_smin_optab,
  cond_smax_optab,
  cond_umin_optab,
  cond_umax_optab,
  cond_fma_optab,
  cond_fms_optab,
  cond_fnma_optab,
  cond_fnms_optab,
  cmov_optab,
  cstore_optab,
  ctrap_optab,
  addv4_optab,
  subv4_optab,
  mulv4_optab,
  uaddv4_optab,
  usubv4_optab,
  umulv4_optab,
  negv3_optab,
  addptr3_optab,
  smul_highpart_optab,
  umul_highpart_optab,
  cmpmem_optab,
  cmpstr_optab,
  cmpstrn_optab,
  movmem_optab,
  setmem_optab,
  strlen_optab,
  fma_optab,
  fms_optab,
  fnma_optab,
  fnms_optab,
  rint_optab,
  round_optab,
  floor_optab,
  ceil_optab,
  btrunc_optab,
  nearbyint_optab,
  acos_optab,
  acosh_optab,
  asin_optab,
  asinh_optab,
  atan2_optab,
  atan_optab,
  atanh_optab,
  copysign_optab,
  xorsign_optab,
  cos_optab,
  cosh_optab,
  exp10_optab,
  exp2_optab,
  exp_optab,
  expm1_optab,
  fmod_optab,
  hypot_optab,
  ilogb_optab,
  isinf_optab,
  ldexp_optab,
  log10_optab,
  log1p_optab,
  log2_optab,
  log_optab,
  logb_optab,
  pow_optab,
  remainder_optab,
  rsqrt_optab,
  scalb_optab,
  signbit_optab,
  significand_optab,
  sin_optab,
  sincos_optab,
  sinh_optab,
  tan_optab,
  tanh_optab,
  fmax_optab,
  fmin_optab,
  reduc_smax_scal_optab,
  reduc_smin_scal_optab,
  reduc_plus_scal_optab,
  reduc_umax_scal_optab,
  reduc_umin_scal_optab,
  reduc_and_scal_optab,
  reduc_ior_scal_optab,
  reduc_xor_scal_optab,
  fold_left_plus_optab,
  extract_last_optab,
  fold_extract_last_optab,
  savg_floor_optab,
  uavg_floor_optab,
  savg_ceil_optab,
  uavg_ceil_optab,
  sdot_prod_optab,
  ssum_widen_optab,
  udot_prod_optab,
  usum_widen_optab,
  usad_optab,
  ssad_optab,
  vec_pack_sfix_trunc_optab,
  vec_pack_ssat_optab,
  vec_pack_trunc_optab,
  vec_pack_ufix_trunc_optab,
  vec_pack_sbool_trunc_optab,
  vec_pack_usat_optab,
  vec_packs_float_optab,
  vec_packu_float_optab,
  vec_perm_optab,
  vec_realign_load_optab,
  vec_set_optab,
  vec_shr_optab,
  vec_unpack_sfix_trunc_hi_optab,
  vec_unpack_sfix_trunc_lo_optab,
  vec_unpack_ufix_trunc_hi_optab,
  vec_unpack_ufix_trunc_lo_optab,
  vec_unpacks_float_hi_optab,
  vec_unpacks_float_lo_optab,
  vec_unpacks_hi_optab,
  vec_unpacks_lo_optab,
  vec_unpacks_sbool_hi_optab,
  vec_unpacks_sbool_lo_optab,
  vec_unpacku_float_hi_optab,
  vec_unpacku_float_lo_optab,
  vec_unpacku_hi_optab,
  vec_unpacku_lo_optab,
  vec_widen_smult_even_optab,
  vec_widen_smult_hi_optab,
  vec_widen_smult_lo_optab,
  vec_widen_smult_odd_optab,
  vec_widen_sshiftl_hi_optab,
  vec_widen_sshiftl_lo_optab,
  vec_widen_umult_even_optab,
  vec_widen_umult_hi_optab,
  vec_widen_umult_lo_optab,
  vec_widen_umult_odd_optab,
  vec_widen_ushiftl_hi_optab,
  vec_widen_ushiftl_lo_optab,
  sync_add_optab,
  sync_and_optab,
  sync_ior_optab,
  sync_lock_release_optab,
  sync_nand_optab,
  sync_sub_optab,
  sync_xor_optab,
  atomic_add_fetch_optab,
  atomic_add_optab,
  atomic_and_fetch_optab,
  atomic_and_optab,
  atomic_bit_test_and_set_optab,
  atomic_bit_test_and_complement_optab,
  atomic_bit_test_and_reset_optab,
  atomic_compare_and_swap_optab,
  atomic_exchange_optab,
  atomic_fetch_add_optab,
  atomic_fetch_and_optab,
  atomic_fetch_nand_optab,
  atomic_fetch_or_optab,
  atomic_fetch_sub_optab,
  atomic_fetch_xor_optab,
  atomic_load_optab,
  atomic_nand_fetch_optab,
  atomic_nand_optab,
  atomic_or_fetch_optab,
  atomic_or_optab,
  atomic_store_optab,
  atomic_sub_fetch_optab,
  atomic_sub_optab,
  atomic_xor_fetch_optab,
  atomic_xor_optab,
  get_thread_pointer_optab,
  set_thread_pointer_optab,
  gather_load_optab,
  mask_gather_load_optab,
  scatter_store_optab,
  mask_scatter_store_optab,
  vec_duplicate_optab,
  vec_series_optab,
  vec_shl_insert_optab,
  FIRST_CONV_OPTAB = sext_optab,
  LAST_CONVLIB_OPTAB = satfractuns_optab,
  LAST_CONV_OPTAB = while_ult_optab,
  FIRST_NORM_OPTAB = add_optab,
  LAST_NORMLIB_OPTAB = sync_lock_test_and_set_optab,
  LAST_NORM_OPTAB = vec_shl_insert_optab
};

#define NUM_OPTABS          328
#define NUM_CONVLIB_OPTABS  15
#define NUM_NORMLIB_OPTABS  80
#define NUM_OPTAB_PATTERNS  1543
typedef enum optab_tag optab;
typedef enum optab_tag convert_optab;
typedef enum optab_tag direct_optab;

struct optab_libcall_d
{
  char libcall_suffix;
  const char *libcall_basename;
  void (*libcall_gen) (optab, const char *name,
		       char suffix, machine_mode);
};

struct convert_optab_libcall_d
{
  const char *libcall_basename;
  void (*libcall_gen) (convert_optab, const char *name,
		       machine_mode, machine_mode);
};

/* Given an enum insn_code, access the function to construct
   the body of that kind of insn.  */
#define GEN_FCN(CODE) (insn_data[CODE].genfun)

#ifdef NUM_RTX_CODE
/* Contains the optab used for each rtx code, and vice-versa.  */
extern const optab code_to_optab_[NUM_RTX_CODE];
extern const enum rtx_code optab_to_code_[NUM_OPTABS];

static inline optab
code_to_optab (enum rtx_code code)
{
  return code_to_optab_[code];
}

static inline enum rtx_code
optab_to_code (optab op)
{
  return optab_to_code_[op];
}

extern insn_code maybe_code_for_aarch64_reload_movcp (machine_mode, machine_mode);
inline insn_code
code_for_aarch64_reload_movcp (machine_mode arg0, machine_mode arg1)
{
  insn_code code = maybe_code_for_aarch64_reload_movcp (arg0, arg1);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_aarch64_reload_movcp (machine_mode, machine_mode, rtx, rtx, rtx);
inline rtx
gen_aarch64_reload_movcp (machine_mode arg0, machine_mode arg1, rtx x0, rtx x1, rtx x2)
{
  rtx res = maybe_gen_aarch64_reload_movcp (arg0, arg1, x0, x1, x2);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_aarch64_reload_mov (machine_mode);
inline insn_code
code_for_aarch64_reload_mov (machine_mode arg0)
{
  insn_code code = maybe_code_for_aarch64_reload_mov (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_aarch64_reload_mov (machine_mode, rtx, rtx, rtx);
inline rtx
gen_aarch64_reload_mov (machine_mode arg0, rtx x0, rtx x1, rtx x2)
{
  rtx res = maybe_gen_aarch64_reload_mov (arg0, x0, x1, x2);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_aarch64_movdi_low (machine_mode);
inline insn_code
code_for_aarch64_movdi_low (machine_mode arg0)
{
  insn_code code = maybe_code_for_aarch64_movdi_low (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_aarch64_movdi_low (machine_mode, rtx, rtx);
inline rtx
gen_aarch64_movdi_low (machine_mode arg0, rtx x0, rtx x1)
{
  rtx res = maybe_gen_aarch64_movdi_low (arg0, x0, x1);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_aarch64_movdi_high (machine_mode);
inline insn_code
code_for_aarch64_movdi_high (machine_mode arg0)
{
  insn_code code = maybe_code_for_aarch64_movdi_high (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_aarch64_movdi_high (machine_mode, rtx, rtx);
inline rtx
gen_aarch64_movdi_high (machine_mode arg0, rtx x0, rtx x1)
{
  rtx res = maybe_gen_aarch64_movdi_high (arg0, x0, x1);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_aarch64_movhigh_di (machine_mode);
inline insn_code
code_for_aarch64_movhigh_di (machine_mode arg0)
{
  insn_code code = maybe_code_for_aarch64_movhigh_di (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_aarch64_movhigh_di (machine_mode, rtx, rtx);
inline rtx
gen_aarch64_movhigh_di (machine_mode arg0, rtx x0, rtx x1)
{
  rtx res = maybe_gen_aarch64_movhigh_di (arg0, x0, x1);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_aarch64_movlow_di (machine_mode);
inline insn_code
code_for_aarch64_movlow_di (machine_mode arg0)
{
  insn_code code = maybe_code_for_aarch64_movlow_di (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_aarch64_movlow_di (machine_mode, rtx, rtx);
inline rtx
gen_aarch64_movlow_di (machine_mode arg0, rtx x0, rtx x1)
{
  rtx res = maybe_gen_aarch64_movlow_di (arg0, x0, x1);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_probe_sve_stack_clash (machine_mode);
inline insn_code
code_for_probe_sve_stack_clash (machine_mode arg0)
{
  insn_code code = maybe_code_for_probe_sve_stack_clash (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_probe_sve_stack_clash (machine_mode, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_probe_sve_stack_clash (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4)
{
  rtx res = maybe_gen_probe_sve_stack_clash (arg0, x0, x1, x2, x3, x4);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_despeculate_copy (machine_mode);
inline insn_code
code_for_despeculate_copy (machine_mode arg0)
{
  insn_code code = maybe_code_for_despeculate_copy (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_despeculate_copy (machine_mode, rtx, rtx, rtx);
inline rtx
gen_despeculate_copy (machine_mode arg0, rtx x0, rtx x1, rtx x2)
{
  rtx res = maybe_gen_despeculate_copy (arg0, x0, x1, x2);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_aarch64_split_simd_mov (machine_mode);
inline insn_code
code_for_aarch64_split_simd_mov (machine_mode arg0)
{
  insn_code code = maybe_code_for_aarch64_split_simd_mov (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_aarch64_split_simd_mov (machine_mode, rtx, rtx);
inline rtx
gen_aarch64_split_simd_mov (machine_mode arg0, rtx x0, rtx x1)
{
  rtx res = maybe_gen_aarch64_split_simd_mov (arg0, x0, x1);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_aarch64_rsqrte (machine_mode);
inline insn_code
code_for_aarch64_rsqrte (machine_mode arg0)
{
  insn_code code = maybe_code_for_aarch64_rsqrte (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_aarch64_rsqrte (machine_mode, rtx, rtx);
inline rtx
gen_aarch64_rsqrte (machine_mode arg0, rtx x0, rtx x1)
{
  rtx res = maybe_gen_aarch64_rsqrte (arg0, x0, x1);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_aarch64_rsqrts (machine_mode);
inline insn_code
code_for_aarch64_rsqrts (machine_mode arg0)
{
  insn_code code = maybe_code_for_aarch64_rsqrts (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_aarch64_rsqrts (machine_mode, rtx, rtx, rtx);
inline rtx
gen_aarch64_rsqrts (machine_mode arg0, rtx x0, rtx x1, rtx x2)
{
  rtx res = maybe_gen_aarch64_rsqrts (arg0, x0, x1, x2);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_aarch64_simd_combine (machine_mode);
inline insn_code
code_for_aarch64_simd_combine (machine_mode arg0)
{
  insn_code code = maybe_code_for_aarch64_simd_combine (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_aarch64_simd_combine (machine_mode, rtx, rtx, rtx);
inline rtx
gen_aarch64_simd_combine (machine_mode arg0, rtx x0, rtx x1, rtx x2)
{
  rtx res = maybe_gen_aarch64_simd_combine (arg0, x0, x1, x2);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_aarch64_frecpe (machine_mode);
inline insn_code
code_for_aarch64_frecpe (machine_mode arg0)
{
  insn_code code = maybe_code_for_aarch64_frecpe (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_aarch64_frecpe (machine_mode, rtx, rtx);
inline rtx
gen_aarch64_frecpe (machine_mode arg0, rtx x0, rtx x1)
{
  rtx res = maybe_gen_aarch64_frecpe (arg0, x0, x1);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_aarch64_frecps (machine_mode);
inline insn_code
code_for_aarch64_frecps (machine_mode arg0)
{
  insn_code code = maybe_code_for_aarch64_frecps (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_aarch64_frecps (machine_mode, rtx, rtx, rtx);
inline rtx
gen_aarch64_frecps (machine_mode arg0, rtx x0, rtx x1, rtx x2)
{
  rtx res = maybe_gen_aarch64_frecps (arg0, x0, x1, x2);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_atomic_compare_and_swap (machine_mode);
inline insn_code
code_for_atomic_compare_and_swap (machine_mode arg0)
{
  insn_code code = maybe_code_for_atomic_compare_and_swap (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_atomic_compare_and_swap (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_atomic_compare_and_swap (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6, rtx x7)
{
  rtx res = maybe_gen_atomic_compare_and_swap (arg0, x0, x1, x2, x3, x4, x5, x6, x7);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_aarch64_compare_and_swap (machine_mode);
inline insn_code
code_for_aarch64_compare_and_swap (machine_mode arg0)
{
  insn_code code = maybe_code_for_aarch64_compare_and_swap (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_aarch64_compare_and_swap (machine_mode, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
inline rtx
gen_aarch64_compare_and_swap (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3, rtx x4, rtx x5, rtx x6)
{
  rtx res = maybe_gen_aarch64_compare_and_swap (arg0, x0, x1, x2, x3, x4, x5, x6);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_aarch64_compare_and_swap_lse (machine_mode);
inline insn_code
code_for_aarch64_compare_and_swap_lse (machine_mode arg0)
{
  insn_code code = maybe_code_for_aarch64_compare_and_swap_lse (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_aarch64_compare_and_swap_lse (machine_mode, rtx, rtx, rtx, rtx);
inline rtx
gen_aarch64_compare_and_swap_lse (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3)
{
  rtx res = maybe_gen_aarch64_compare_and_swap_lse (arg0, x0, x1, x2, x3);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_aarch64_load_exclusive (machine_mode);
inline insn_code
code_for_aarch64_load_exclusive (machine_mode arg0)
{
  insn_code code = maybe_code_for_aarch64_load_exclusive (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_aarch64_load_exclusive (machine_mode, rtx, rtx, rtx);
inline rtx
gen_aarch64_load_exclusive (machine_mode arg0, rtx x0, rtx x1, rtx x2)
{
  rtx res = maybe_gen_aarch64_load_exclusive (arg0, x0, x1, x2);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_aarch64_store_exclusive (machine_mode);
inline insn_code
code_for_aarch64_store_exclusive (machine_mode arg0)
{
  insn_code code = maybe_code_for_aarch64_store_exclusive (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_aarch64_store_exclusive (machine_mode, rtx, rtx, rtx, rtx);
inline rtx
gen_aarch64_store_exclusive (machine_mode arg0, rtx x0, rtx x1, rtx x2, rtx x3)
{
  rtx res = maybe_gen_aarch64_store_exclusive (arg0, x0, x1, x2, x3);
  gcc_assert (res);
  return res;
}

extern insn_code maybe_code_for_aarch64_pred_mov (machine_mode);
inline insn_code
code_for_aarch64_pred_mov (machine_mode arg0)
{
  insn_code code = maybe_code_for_aarch64_pred_mov (arg0);
  gcc_assert (code != CODE_FOR_nothing);
  return code;
}

extern rtx maybe_gen_aarch64_pred_mov (machine_mode, rtx, rtx, rtx);
inline rtx
gen_aarch64_pred_mov (machine_mode arg0, rtx x0, rtx x1, rtx x2)
{
  rtx res = maybe_gen_aarch64_pred_mov (arg0, x0, x1, x2);
  gcc_assert (res);
  return res;
}
#endif

extern const struct convert_optab_libcall_d convlib_def[NUM_CONVLIB_OPTABS];
extern const struct optab_libcall_d normlib_def[NUM_NORMLIB_OPTABS];

/* Returns the active icode for the given (encoded) optab.  */
extern enum insn_code raw_optab_handler (unsigned);
extern bool swap_optab_enable (optab, machine_mode, bool);

/* Target-dependent globals.  */
struct target_optabs {
  /* Patterns that are used by optabs that are enabled for this target.  */
  bool pat_enable[NUM_OPTAB_PATTERNS];

  /* Cache if the target supports vec_gather_load for at least one vector
     mode.  */
  bool supports_vec_gather_load;
  bool supports_vec_gather_load_cached;
  bool supports_vec_scatter_store;
  bool supports_vec_scatter_store_cached;
};
extern void init_all_optabs (struct target_optabs *);

extern struct target_optabs default_target_optabs;
extern struct target_optabs *this_fn_optabs;
#if SWITCHABLE_TARGET
extern struct target_optabs *this_target_optabs;
#else
#define this_target_optabs (&default_target_optabs)
#endif
#endif
