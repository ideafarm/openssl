/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2020 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef OPENSSL_ESSERR_H
# define OPENSSL_ESSERR_H
# pragma once

# include <openssl/opensslconf.h>
# include <openssl/symhacks.h>
# include <openssl/cryptoerr_legacy.h>



/*
 * ESS function codes.
 */
# ifndef OPENSSL_NO_DEPRECATED_3_0
#  define ESS_F_ESS_CERT_ID_NEW_INIT                       0
#  define ESS_F_ESS_CERT_ID_V2_NEW_INIT                    0
#  define ESS_F_ESS_SIGNING_CERT_ADD                       0
#  define ESS_F_ESS_SIGNING_CERT_NEW_INIT                  0
#  define ESS_F_ESS_SIGNING_CERT_V2_ADD                    0
#  define ESS_F_ESS_SIGNING_CERT_V2_NEW_INIT               0
# endif

/*
 * ESS reason codes.
 */
# define ESS_R_ESS_SIGNING_CERTIFICATE_ERROR              102
# define ESS_R_ESS_SIGNING_CERT_ADD_ERROR                 100
# define ESS_R_ESS_SIGNING_CERT_V2_ADD_ERROR              101

#endif
