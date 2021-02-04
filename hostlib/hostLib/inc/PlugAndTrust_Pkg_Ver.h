/* Copyright 2019,2020 NXP
 * 
 * This software is owned or controlled by NXP and may only be used
 * strictly in accordance with the applicable license terms.  By expressly
 * accepting such terms or by downloading, installing, activating and/or
 * otherwise using the software, you are agreeing that you have read, and
 * that you agree to comply with and are bound by, such license terms.  If
 * you do not agree to be bound by the applicable license terms, then you
 * may not retain, install, activate or otherwise use the software.
 * 
 */

#ifndef PLUGANDTRUST_VERSION_INFO_H_INCLUDED
#define PLUGANDTRUST_VERSION_INFO_H_INCLUDED


/* clang-format off */
#define PLUGANDTRUST_PROD_NAME          "PlugAndTrust"
#define PLUGANDTRUST_VER_STRING_NUM     "v03.00.06_20201204"
#define PLUGANDTRUST_PROD_NAME_VER_FULL "PlugAndTrust_v03.00.06_20201204"
#define PLUGANDTRUST_VER_MAJOR          (3u)
#define PLUGANDTRUST_VER_MINOR          (0u)
#define PLUGANDTRUST_VER_DEV            (6u)

/* v03.00 = 30000u */
#define PLUGANDTRUST_VER_MAJOR_MINOR ( 0 \
    | (PLUGANDTRUST_VER_MAJOR * 10000u)    \
    | (PLUGANDTRUST_VER_MINOR))

/* v03.00.06 = 300000006ULL */
#define PLUGANDTRUST_VER_MAJOR_MINOR_DEV ( 0 \
    | (PLUGANDTRUST_VER_MAJOR * 10000*10000u)    \
    | (PLUGANDTRUST_VER_MINOR * 10000u)    \
    | (PLUGANDTRUST_VER_DEV))

/* clang-format on */


/* Version Information:
 * Generated by:
 *     scripts\version_info.py (v2019.01.17_00)
 * 
 * Do not edit this file. Update:
 *     ./version_info.txt instead.
 * 
 * prod_name = "PlugAndTrust"
 * 
 * prod_desc = "Plug And Trust Package"
 * 
 * lang_c_prefix = prod_name.upper()
 * 
 * lang_namespace = ""
 * 
 * v_major  = "03"
 * 
 * v_minor  = "00"
 * 
 * v_dev    = "06"
 * 
 * # Develop Branch
 * v_meta   = ""
 * 
 * maturity = "B"
 * 
 */

#endif /* PLUGANDTRUST_VERSION_INFO_H_INCLUDED */