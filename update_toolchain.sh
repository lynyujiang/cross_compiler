#!/bin/bash
###############################################################################
#
# Copyright (C) 2014 - 2019 by Yujiang Lin <lynyujiang@aliyun.com>
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
###############################################################################
# => Force locale language to be set to English. This avoids issues when doing
# text and string processing.
export LC_ALL=C LANGUAGE=C LANG=C

# => Filename of the running script
ZN_SCRIPT_NAME="$(basename ${BASH_SOURCE[0]})"

# => Directory containing the running script
ZN_SCRIPT_DIR="$(cd "$(dirname ${BASH_SOURCE[0]})" && pwd)"

# => Xilinx Tools
XILINX="${XILINX:-/mnt/workspace/Xilinx}"
XILINX_VERSION="${XILINX_VERSION:-2020.1}"

# => SDK
XILINX_SDK=${XILINX}/Vitis/${XILINX_VERSION}

# => make distclean
export GLOBIGNORE=update_toolchain.sh
rm -rf *
unset GLOBIGNORE

# => update cross compiler
cp -R ${XILINX_SDK}/gnu/aarch64/lin/aarch64-linux ${ZN_SCRIPT_DIR}/aarch64
cp -R ${XILINX_SDK}/gnu/aarch32/lin/gcc-arm-linux-gnueabi ${ZN_SCRIPT_DIR}/aarch32
