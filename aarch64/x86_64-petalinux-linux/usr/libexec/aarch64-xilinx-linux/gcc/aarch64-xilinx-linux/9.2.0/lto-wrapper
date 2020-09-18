#!/bin/bash
# Written by Mark Hatle <mhatle@xilinx.com>
# Copyright 2019 Xilinx
#
# SPDX-License-Identifier: GPL-2.0-only
LDSO=ld-linux-x86-64.so.2
LIBBASEPATH=../../../../../../lib
LIBPATH=../../../../../lib
executable=$(basename $0)
wrapper=$0
BASEPATH=$(dirname ${wrapper})
if [ ! -x $0 ]; then
 wrapper=$(which $0)
fi
if [ -h $0 ]; then
 executable=$(basename "$(readlink $0)" )
 BASEPATH=$(dirname "$(realpath $0)")
fi
LIBBASEPATH=$(realpath ${BASEPATH}/${LIBBASEPATH})
LIBPATH=$(realpath ${BASEPATH}/${LIBPATH})
export COLLECT_GCC=${COLLECT_GCC%%.real}
exec ${LIBBASEPATH}/${LDSO} --library-path ${LIBPATH}:${LIBBASEPATH} ${BASEPATH}/${executable}.real "$@"
