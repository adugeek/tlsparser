#include <stdio.h>
#include "tls_ciphers.h"
#include <stdlib.h>

// AUTO-GENERATED CODE. Use the python script to re-generate this list

char *cipher_name(unsigned code)
{
    switch(code)
    {
        default:
            return 0;
            break;
        case 0x0000:
            return "SSL_NULL_WITH_NULL_NULL";
        case 0x0001:
            return "SSL_RSA_WITH_NULL_MD5";
        case 0x0002:
            return "SSL_RSA_WITH_NULL_SHA";
        case 0x0003:
            return "SSL_RSA_EXPORT_WITH_RC4_40_MD5";
        case 0x0004:
            return "SSL_RSA_WITH_RC4_128_MD5";
        case 0x0005:
            return "SSL_RSA_WITH_RC4_128_SHA";
        case 0x0006:
            return "SSL_RSA_EXPORT_WITH_RC2_CBC_40_MD5";
        case 0x0007:
            return "SSL_RSA_WITH_IDEA_CBC_SHA";
        case 0x0008:
            return "SSL_RSA_EXPORT_WITH_DES40_CBC_SHA";
        case 0x0009:
            return "SSL_RSA_WITH_DES_CBC_SHA";
        case 0x000a:
            return "SSL_RSA_WITH_3DES_EDE_CBC_SHA";
        case 0x000b:
            return "SSL_DH_DSS_EXPORT_WITH_DES40_CBC_SHA";
        case 0x000c:
            return "SSL_DH_DSS_WITH_DES_CBC_SHA";
        case 0x000d:
            return "SSL_DH_DSS_WITH_3DES_EDE_CBC_SHA";
        case 0x000e:
            return "SSL_DH_RSA_EXPORT_WITH_DES40_CBC_SHA";
        case 0x000f:
            return "SSL_DH_RSA_WITH_DES_CBC_SHA";
        case 0x0010:
            return "SSL_DH_RSA_WITH_3DES_EDE_CBC_SHA";
        case 0x0011:
            return "SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA";
        case 0x0012:
            return "SSL_DHE_DSS_WITH_DES_CBC_SHA";
        case 0x0013:
            return "SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA";
        case 0x0014:
            return "SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA";
        case 0x0015:
            return "SSL_DHE_RSA_WITH_DES_CBC_SHA";
        case 0x0016:
            return "SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA";
        case 0x0017:
            return "SSL_DH_anon_EXPORT_WITH_RC4_40_MD5";
        case 0x0018:
            return "SSL_DH_anon_WITH_RC4_128_MD5";
        case 0x0019:
            return "SSL_DH_anon_EXPORT_WITH_DES40_CBC_SHA";
        case 0x001a:
            return "SSL_DH_anon_WITH_DES_CBC_SHA";
        case 0x001b:
            return "SSL_DH_anon_WITH_3DES_EDE_CBC_SHA";
        case 0xc01c:
            return "TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA";
        case 0x001d:
            return "SSL_FORTEZZA_KEA_WITH_FORTEZZA_CBC_SHA";
        case 0x001e:
            return "SSL_FORTEZZA_KEA_WITH_RC4_128_SHA";
        case 0x001f:
            return "TLS_KRB5_WITH_3DES_EDE_CBC_SHA";
        case 0x0020:
            return "TLS_KRB5_WITH_RC4_128_SHA";
        case 0x0021:
            return "TLS_KRB5_WITH_IDEA_CBC_SHA";
        case 0x0022:
            return "TLS_KRB5_WITH_DES_CBC_MD5";
        case 0x0023:
            return "TLS_KRB5_WITH_3DES_EDE_CBC_MD5";
        case 0x0024:
            return "TLS_KRB5_WITH_RC4_128_MD5";
        case 0x0025:
            return "TLS_KRB5_WITH_IDEA_CBC_MD5";
        case 0x0026:
            return "TLS_KRB5_EXPORT_WITH_DES_CBC_40_SHA";
        case 0x0027:
            return "TLS_KRB5_EXPORT_WITH_RC2_CBC_40_SHA";
        case 0x0028:
            return "TLS_KRB5_EXPORT_WITH_RC4_40_SHA";
        case 0x0029:
            return "TLS_KRB5_EXPORT_WITH_DES_CBC_40_MD5";
        case 0x002a:
            return "TLS_KRB5_EXPORT_WITH_RC2_CBC_40_MD5";
        case 0x002b:
            return "TLS_KRB5_EXPORT_WITH_RC4_40_MD5";
        case 0x002c:
            return "TLS_PSK_WITH_NULL_SHA";
        case 0x002d:
            return "TLS_DHE_PSK_WITH_NULL_SHA";
        case 0x002e:
            return "TLS_RSA_PSK_WITH_NULL_SHA";
        case 0x002f:
            return "TLS_RSA_WITH_AES_128_CBC_SHA";
        case 0x0030:
            return "TLS_DH_DSS_WITH_AES_128_CBC_SHA";
        case 0x0031:
            return "TLS_DH_RSA_WITH_AES_128_CBC_SHA";
        case 0x0032:
            return "TLS_DHE_DSS_WITH_AES_128_CBC_SHA";
        case 0x0033:
            return "TLS_DHE_RSA_WITH_AES_128_CBC_SHA";
        case 0x0034:
            return "TLS_DH_anon_WITH_AES_128_CBC_SHA";
        case 0x0035:
            return "TLS_RSA_WITH_AES_256_CBC_SHA";
        case 0x0036:
            return "TLS_DH_DSS_WITH_AES_256_CBC_SHA";
        case 0x0037:
            return "TLS_DH_RSA_WITH_AES_256_CBC_SHA";
        case 0x0038:
            return "TLS_DHE_DSS_WITH_AES_256_CBC_SHA";
        case 0x0039:
            return "TLS_DHE_RSA_WITH_AES_256_CBC_SHA";
        case 0x003a:
            return "TLS_DH_anon_WITH_AES_256_CBC_SHA";
        case 0x003b:
            return "TLS_RSA_WITH_NULL_SHA256";
        case 0x003c:
            return "TLS_RSA_WITH_AES_128_CBC_SHA256";
        case 0x003d:
            return "TLS_RSA_WITH_AES_256_CBC_SHA256";
        case 0x003e:
            return "TLS_DH_DSS_WITH_AES_128_CBC_SHA256";
        case 0x003f:
            return "TLS_DH_RSA_WITH_AES_128_CBC_SHA256";
        case 0x0040:
            return "TLS_DHE_DSS_WITH_AES_128_CBC_SHA256";
        case 0x0041:
            return "TLS_RSA_WITH_CAMELLIA_128_CBC_SHA";
        case 0x0042:
            return "TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA";
        case 0x0043:
            return "TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA";
        case 0x0044:
            return "TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA";
        case 0x0045:
            return "TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA";
        case 0x0046:
            return "TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA";
        case 0xc047:
            return "TLS_DH_anon_WITH_ARIA_256_CBC_SHA384";
        case 0xc048:
            return "TLS_ECDHE_ECDSA_WITH_ARIA_128_CBC_SHA256";
        case 0xc00c:
            return "TLS_ECDH_RSA_WITH_RC4_128_SHA";
        case 0xc04a:
            return "TLS_ECDH_ECDSA_WITH_ARIA_128_CBC_SHA256";
        case 0xc04b:
            return "TLS_ECDH_ECDSA_WITH_ARIA_256_CBC_SHA384";
        case 0xc04c:
            return "TLS_ECDHE_RSA_WITH_ARIA_128_CBC_SHA256";
        case 0xc04d:
            return "TLS_ECDHE_RSA_WITH_ARIA_256_CBC_SHA384";
        case 0xc04e:
            return "TLS_ECDH_RSA_WITH_ARIA_128_CBC_SHA256";
        case 0xc00d:
            return "TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA";
        case 0xc050:
            return "TLS_RSA_WITH_ARIA_128_GCM_SHA256";
        case 0xc051:
            return "TLS_RSA_WITH_ARIA_256_GCM_SHA384";
        case 0xc052:
            return "TLS_DHE_RSA_WITH_ARIA_128_GCM_SHA256";
        case 0xc053:
            return "TLS_DHE_RSA_WITH_ARIA_256_GCM_SHA384";
        case 0xc054:
            return "TLS_DH_RSA_WITH_ARIA_128_GCM_SHA256";
        case 0xc00e:
            return "TLS_ECDH_RSA_WITH_AES_128_CBC_SHA";
        case 0xc056:
            return "TLS_DHE_DSS_WITH_ARIA_128_GCM_SHA256";
        case 0xc057:
            return "TLS_DHE_DSS_WITH_ARIA_256_GCM_SHA384";
        case 0xc058:
            return "TLS_DH_DSS_WITH_ARIA_128_GCM_SHA256";
        case 0xc059:
            return "TLS_DH_DSS_WITH_ARIA_256_GCM_SHA384";
        case 0xc05a:
            return "TLS_DH_anon_WITH_ARIA_128_GCM_SHA256";
        case 0xc00f:
            return "TLS_ECDH_RSA_WITH_AES_256_CBC_SHA";
        case 0xc05c:
            return "TLS_ECDHE_ECDSA_WITH_ARIA_128_GCM_SHA256";
        case 0xc05d:
            return "TLS_ECDHE_ECDSA_WITH_ARIA_256_GCM_SHA384";
        case 0xc05e:
            return "TLS_ECDH_ECDSA_WITH_ARIA_128_GCM_SHA256";
        case 0xc05f:
            return "TLS_ECDH_ECDSA_WITH_ARIA_256_GCM_SHA384";
        case 0xc060:
            return "TLS_ECDHE_RSA_WITH_ARIA_128_GCM_SHA256";
        case 0xc010:
            return "TLS_ECDHE_RSA_WITH_NULL_SHA";
        case 0xc062:
            return "TLS_ECDH_RSA_WITH_ARIA_128_GCM_SHA256";
        case 0xc063:
            return "TLS_ECDH_RSA_WITH_ARIA_256_GCM_SHA384";
        case 0xc064:
            return "TLS_PSK_WITH_ARIA_128_CBC_SHA256";
        case 0xc065:
            return "TLS_PSK_WITH_ARIA_256_CBC_SHA384";
        case 0xc066:
            return "TLS_DHE_PSK_WITH_ARIA_128_CBC_SHA256";
        case 0x0067:
            return "TLS_DHE_RSA_WITH_AES_128_CBC_SHA256";
        case 0x0068:
            return "TLS_DH_DSS_WITH_AES_256_CBC_SHA256";
        case 0x0069:
            return "TLS_DH_RSA_WITH_AES_256_CBC_SHA256";
        case 0x006a:
            return "TLS_DHE_DSS_WITH_AES_256_CBC_SHA256";
        case 0x006b:
            return "TLS_DHE_RSA_WITH_AES_256_CBC_SHA256";
        case 0x006c:
            return "TLS_DH_anon_WITH_AES_128_CBC_SHA256";
        case 0x006d:
            return "TLS_DH_anon_WITH_AES_256_CBC_SHA256";
        case 0xc06e:
            return "TLS_RSA_PSK_WITH_ARIA_128_GCM_SHA256";
        case 0xc06f:
            return "TLS_RSA_PSK_WITH_ARIA_256_GCM_SHA384";
        case 0xc070:
            return "TLS_ECDHE_PSK_WITH_ARIA_128_CBC_SHA256";
        case 0xc071:
            return "TLS_ECDHE_PSK_WITH_ARIA_256_CBC_SHA384";
        case 0xc072:
            return "TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256";
        case 0xc013:
            return "TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA";
        case 0xc074:
            return "TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256";
        case 0xc075:
            return "TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384";
        case 0xc076:
            return "TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256";
        case 0xc077:
            return "TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384";
        case 0xc078:
            return "TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256";
        case 0xc014:
            return "TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA";
        case 0xc07a:
            return "TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256";
        case 0xc07b:
            return "TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384";
        case 0xc07c:
            return "TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256";
        case 0xc07d:
            return "TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384";
        case 0xc07e:
            return "TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256";
        case 0xc015:
            return "TLS_ECDH_anon_WITH_NULL_SHA";
        case 0xc080:
            return "TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256";
        case 0xc081:
            return "TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384";
        case 0xc082:
            return "TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256";
        case 0x0083:
            return "TLS_GOSTR341001_WITH_NULL_GOSTR3411";
        case 0x0084:
            return "TLS_RSA_WITH_CAMELLIA_256_CBC_SHA";
        case 0x0085:
            return "TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA";
        case 0x0086:
            return "TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA";
        case 0x0087:
            return "TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA";
        case 0x0088:
            return "TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA";
        case 0x0089:
            return "TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA";
        case 0x008a:
            return "TLS_PSK_WITH_RC4_128_SHA";
        case 0x008b:
            return "TLS_PSK_WITH_3DES_EDE_CBC_SHA";
        case 0x008c:
            return "TLS_PSK_WITH_AES_128_CBC_SHA";
        case 0x008d:
            return "TLS_PSK_WITH_AES_256_CBC_SHA";
        case 0x008e:
            return "TLS_DHE_PSK_WITH_RC4_128_SHA";
        case 0x008f:
            return "TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA";
        case 0x0090:
            return "TLS_DHE_PSK_WITH_AES_128_CBC_SHA";
        case 0x0091:
            return "TLS_DHE_PSK_WITH_AES_256_CBC_SHA";
        case 0x0092:
            return "TLS_RSA_PSK_WITH_RC4_128_SHA";
        case 0x0093:
            return "TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA";
        case 0x0094:
            return "TLS_RSA_PSK_WITH_AES_128_CBC_SHA";
        case 0x0095:
            return "TLS_RSA_PSK_WITH_AES_256_CBC_SHA";
        case 0x0096:
            return "TLS_RSA_WITH_SEED_CBC_SHA";
        case 0x0097:
            return "TLS_DH_DSS_WITH_SEED_CBC_SHA";
        case 0x0098:
            return "TLS_DH_RSA_WITH_SEED_CBC_SHA";
        case 0x0099:
            return "TLS_DHE_DSS_WITH_SEED_CBC_SHA";
        case 0x009a:
            return "TLS_DHE_RSA_WITH_SEED_CBC_SHA";
        case 0x009b:
            return "TLS_DH_anon_WITH_SEED_CBC_SHA";
        case 0x009c:
            return "TLS_RSA_WITH_AES_128_GCM_SHA256";
        case 0x009d:
            return "TLS_RSA_WITH_AES_256_GCM_SHA384";
        case 0x009e:
            return "TLS_DHE_RSA_WITH_AES_128_GCM_SHA256";
        case 0x009f:
            return "TLS_DHE_RSA_WITH_AES_256_GCM_SHA384";
        case 0x00a0:
            return "TLS_DH_RSA_WITH_AES_128_GCM_SHA256";
        case 0x00a1:
            return "TLS_DH_RSA_WITH_AES_256_GCM_SHA384";
        case 0x00a2:
            return "TLS_DHE_DSS_WITH_AES_128_GCM_SHA256";
        case 0x00a3:
            return "TLS_DHE_DSS_WITH_AES_256_GCM_SHA384";
        case 0x00a4:
            return "TLS_DH_DSS_WITH_AES_128_GCM_SHA256";
        case 0x00a5:
            return "TLS_DH_DSS_WITH_AES_256_GCM_SHA384";
        case 0x00a6:
            return "TLS_DH_anon_WITH_AES_128_GCM_SHA256";
        case 0x00a7:
            return "TLS_DH_anon_WITH_AES_256_GCM_SHA384";
        case 0x00a8:
            return "TLS_PSK_WITH_AES_128_GCM_SHA256";
        case 0x00a9:
            return "TLS_PSK_WITH_AES_256_GCM_SHA384";
        case 0x00aa:
            return "TLS_DHE_PSK_WITH_AES_128_GCM_SHA256";
        case 0x00ab:
            return "TLS_DHE_PSK_WITH_AES_256_GCM_SHA384";
        case 0x00ac:
            return "TLS_RSA_PSK_WITH_AES_128_GCM_SHA256";
        case 0x00ad:
            return "TLS_RSA_PSK_WITH_AES_256_GCM_SHA384";
        case 0x00ae:
            return "TLS_PSK_WITH_AES_128_CBC_SHA256";
        case 0x00af:
            return "TLS_PSK_WITH_AES_256_CBC_SHA384";
        case 0x00b0:
            return "TLS_PSK_WITH_NULL_SHA256";
        case 0x00b1:
            return "TLS_PSK_WITH_NULL_SHA384";
        case 0x00b2:
            return "TLS_DHE_PSK_WITH_AES_128_CBC_SHA256";
        case 0x00b3:
            return "TLS_DHE_PSK_WITH_AES_256_CBC_SHA384";
        case 0x00b4:
            return "TLS_DHE_PSK_WITH_NULL_SHA256";
        case 0x00b5:
            return "TLS_DHE_PSK_WITH_NULL_SHA384";
        case 0x00b6:
            return "TLS_RSA_PSK_WITH_AES_128_CBC_SHA256";
        case 0x00b7:
            return "TLS_RSA_PSK_WITH_AES_256_CBC_SHA384";
        case 0x00b8:
            return "TLS_RSA_PSK_WITH_NULL_SHA256";
        case 0x00b9:
            return "TLS_RSA_PSK_WITH_NULL_SHA384";
        case 0x00ba:
            return "TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256";
        case 0x00bb:
            return "TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256";
        case 0x00bc:
            return "TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256";
        case 0x00bd:
            return "TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256";
        case 0x00be:
            return "TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256";
        case 0x00bf:
            return "TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256";
        case 0x00c0:
            return "TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256";
        case 0x00c1:
            return "TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256";
        case 0x00c2:
            return "TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256";
        case 0x00c3:
            return "TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256";
        case 0x00c4:
            return "TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256";
        case 0x00c5:
            return "TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256";
        case 0xc021:
            return "TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA";
        case 0xc022:
            return "TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA";
        case 0xc023:
            return "TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256";
        case 0xc018:
            return "TLS_ECDH_anon_WITH_AES_128_CBC_SHA";
        case 0xc024:
            return "TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384";
        case 0xc012:
            return "TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA";
        case 0xcc15:
            return "OLD_TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256";
        case 0xc025:
            return "TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256";
        case 0xc026:
            return "TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384";
        case 0xc027:
            return "TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256";
        case 0xc028:
            return "TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384";
        case 0xc019:
            return "TLS_ECDH_anon_WITH_AES_256_CBC_SHA";
        case 0xc029:
            return "TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256";
        case 0xc02a:
            return "TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384";
        case 0x00ff:
            return "TLS_EMPTY_RENEGOTIATION_INFO_SCSV";
        case 0xc02b:
            return "TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256";
        case 0x0061:
            return "OLD_TLS_DH_DSS_WITH_SEED_CBC_SHA";
        case 0xc02c:
            return "TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384";
        case 0xc02d:
            return "TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256";
        case 0xc01a:
            return "TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA";
        case 0xc02e:
            return "TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384";
        case 0xc02f:
            return "TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256";
        case 0xc030:
            return "TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384";
        case 0xc031:
            return "TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256";
        case 0xc032:
            return "TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384";
        case 0xc01b:
            return "TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA";
        case 0xc033:
            return "TLS_ECDHE_PSK_WITH_RC4_128_SHA";
        case 0xc034:
            return "TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA";
        case 0xc035:
            return "TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA";
        case 0xc036:
            return "TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA";
        case 0xc037:
            return "TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256";
        case 0xc038:
            return "TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384";
        case 0xc039:
            return "TLS_ECDHE_PSK_WITH_NULL_SHA";
        case 0xc011:
            return "TLS_ECDHE_RSA_WITH_RC4_128_SHA";
        case 0xc03a:
            return "TLS_ECDHE_PSK_WITH_NULL_SHA256";
        case 0xc03b:
            return "TLS_ECDHE_PSK_WITH_NULL_SHA384";
        case 0xc03c:
            return "TLS_RSA_WITH_ARIA_128_CBC_SHA256";
        case 0xc01d:
            return "TLS_SRP_SHA_WITH_AES_128_CBC_SHA";
        case 0xc03d:
            return "TLS_RSA_WITH_ARIA_256_CBC_SHA384";
        case 0xc03e:
            return "TLS_DH_DSS_WITH_ARIA_128_CBC_SHA256";
        case 0xc03f:
            return "TLS_DH_DSS_WITH_ARIA_256_CBC_SHA384";
        case 0xc040:
            return "TLS_DH_RSA_WITH_ARIA_128_CBC_SHA256";
        case 0xc041:
            return "TLS_DH_RSA_WITH_ARIA_256_CBC_SHA384";
        case 0xc01e:
            return "TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA";
        case 0xc042:
            return "TLS_DHE_DSS_WITH_ARIA_128_CBC_SHA256";
        case 0xc043:
            return "TLS_DHE_DSS_WITH_ARIA_256_CBC_SHA384";
        case 0xc044:
            return "TLS_DHE_RSA_WITH_ARIA_128_CBC_SHA256";
        case 0xc045:
            return "TLS_DHE_RSA_WITH_ARIA_256_CBC_SHA384";
        case 0xc046:
            return "TLS_DH_anon_WITH_ARIA_128_CBC_SHA256";
        case 0xc01f:
            return "TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA";
        case 0xc049:
            return "TLS_ECDHE_ECDSA_WITH_ARIA_256_CBC_SHA384";
        case 0xc020:
            return "TLS_SRP_SHA_WITH_AES_256_CBC_SHA";
        case 0xc04f:
            return "TLS_ECDH_RSA_WITH_ARIA_256_CBC_SHA384";
        case 0xc055:
            return "TLS_DH_RSA_WITH_ARIA_256_GCM_SHA384";
        case 0x1301:
            return "TLS_AES_128_GCM_SHA256";
        case 0xc05b:
            return "TLS_DH_anon_WITH_ARIA_256_GCM_SHA384";
        case 0x0060:
            return "OLD_TLS_RSA_WITH_SEED_CBC_SHA";
        case 0xc061:
            return "TLS_ECDHE_RSA_WITH_ARIA_256_GCM_SHA384";
        case 0x0062:
            return "OLD_TLS_DH_RSA_WITH_SEED_CBC_SHA";
        case 0x0063:
            return "OLD_TLS_DHE_DSS_WITH_SEED_CBC_SHA";
        case 0x0064:
            return "OLD_TLS_DHE_RSA_WITH_SEED_CBC_SHA";
        case 0x0065:
            return "OLD_TLS_DH_anon_WITH_SEED_CBC_SHA";
        case 0xc067:
            return "TLS_DHE_PSK_WITH_ARIA_256_CBC_SHA384";
        case 0xc068:
            return "TLS_RSA_PSK_WITH_ARIA_128_CBC_SHA256";
        case 0xc069:
            return "TLS_RSA_PSK_WITH_ARIA_256_CBC_SHA384";
        case 0xc06a:
            return "TLS_PSK_WITH_ARIA_128_GCM_SHA256";
        case 0xc06b:
            return "TLS_PSK_WITH_ARIA_256_GCM_SHA384";
        case 0xc06c:
            return "TLS_DHE_PSK_WITH_ARIA_128_GCM_SHA256";
        case 0xc06d:
            return "TLS_DHE_PSK_WITH_ARIA_256_GCM_SHA384";
        case 0xc073:
            return "TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384";
        case 0xc079:
            return "TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384";
        case 0xc07f:
            return "TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384";
        case 0x0080:
            return "TLS_GOSTR341094_WITH_28147_CNT_IMIT";
        case 0x1302:
            return "TLS_AES_256_GCM_SHA384";
        case 0x1303:
            return "TLS_CHACHA20_POLY1305_SHA256";
        case 0x1304:
            return "TLS_AES_128_CCM_SHA256";
        case 0x1305:
            return "TLS_AES_128_CCM_8_SHA256";
        case 0x0081:
            return "TLS_GOSTR341001_WITH_28147_CNT_IMIT";
        case 0x0082:
            return "TLS_GOSTR341094_WITH_NULL_GOSTR3411";
        case 0xc083:
            return "TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384";
        case 0xc084:
            return "TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256";
        case 0xc085:
            return "TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384";
        case 0xc086:
            return "TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256";
        case 0xc087:
            return "TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384";
        case 0xc088:
            return "TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256";
        case 0xc016:
            return "TLS_ECDH_anon_WITH_RC4_128_SHA";
        case 0xc089:
            return "TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384";
        case 0xc08a:
            return "TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256";
        case 0xc08b:
            return "TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384";
        case 0xc08c:
            return "TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256";
        case 0xc08d:
            return "TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384";
        case 0xc08e:
            return "TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256";
        case 0xc08f:
            return "TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384";
        case 0xc090:
            return "TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256";
        case 0xc091:
            return "TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384";
        case 0xc092:
            return "TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256";
        case 0xc093:
            return "TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384";
        case 0xc094:
            return "TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256";
        case 0xc095:
            return "TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384";
        case 0xc096:
            return "TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256";
        case 0xc097:
            return "TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384";
        case 0xc098:
            return "TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256";
        case 0xc099:
            return "TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384";
        case 0xc09a:
            return "TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256";
        case 0xc09b:
            return "TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384";
        case 0xc09c:
            return "TLS_RSA_WITH_AES_128_CCM";
        case 0xc09d:
            return "TLS_RSA_WITH_AES_256_CCM";
        case 0xc09e:
            return "TLS_DHE_RSA_WITH_AES_128_CCM";
        case 0xc09f:
            return "TLS_DHE_RSA_WITH_AES_256_CCM";
        case 0xc0a0:
            return "TLS_RSA_WITH_AES_128_CCM_8";
        case 0xc0a1:
            return "TLS_RSA_WITH_AES_256_CCM_8";
        case 0xc017:
            return "TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA";
        case 0xc0a2:
            return "TLS_DHE_RSA_WITH_AES_128_CCM_8";
        case 0xc0a3:
            return "TLS_DHE_RSA_WITH_AES_256_CCM_8";
        case 0xc0a4:
            return "TLS_PSK_WITH_AES_128_CCM";
        case 0xc0a5:
            return "TLS_PSK_WITH_AES_256_CCM";
        case 0xc0a6:
            return "TLS_DHE_PSK_WITH_AES_128_CCM";
        case 0xc0a7:
            return "TLS_DHE_PSK_WITH_AES_256_CCM";
        case 0xc0a8:
            return "TLS_PSK_WITH_AES_128_CCM_8";
        case 0xc0a9:
            return "TLS_PSK_WITH_AES_256_CCM_8";
        case 0xc0aa:
            return "TLS_PSK_DHE_WITH_AES_128_CCM_8";
        case 0xc0ab:
            return "TLS_PSK_DHE_WITH_AES_256_CCM_8";
        case 0xc0ac:
            return "TLS_ECDHE_ECDSA_WITH_AES_128_CCM";
        case 0xc0ad:
            return "TLS_ECDHE_ECDSA_WITH_AES_256_CCM";
        case 0xcc13:
            return "OLD_TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256";
        case 0xcc14:
            return "OLD_TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256";
        case 0xc0ae:
            return "TLS_ECDHE_ECDSA_WITH_AES_128_CCM_8";
        case 0xc0af:
            return "TLS_ECDHE_ECDSA_WITH_AES_256_CCM_8";
        case 0xcca8:
            return "TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256";
        case 0xcca9:
            return "TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256";
        case 0xccaa:
            return "TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256";
        case 0xccab:
            return "TLS_PSK_WITH_CHACHA20_POLY1305_SHA256";
        case 0xccac:
            return "TLS_ECDHE_PSK_WITH_CHACHA20_POLY1305_SHA256";
        case 0xccad:
            return "TLS_DHE_PSK_WITH_CHACHA20_POLY1305_SHA256_SHA256";
        case 0xccae:
            return "TLS_RSA_PSK_WITH_CHACHA20_POLY1305_SHA256";
        case 0x5600:
            return "TLS_FALLBACK_SCSV";
        case 0xc001:
            return "TLS_ECDH_ECDSA_WITH_NULL_SHA";
        case 0xc002:
            return "TLS_ECDH_ECDSA_WITH_RC4_128_SHA";
        case 0xc003:
            return "TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA";
        case 0xc004:
            return "TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA";
        case 0xc005:
            return "TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA";
        case 0xc006:
            return "TLS_ECDHE_ECDSA_WITH_NULL_SHA";
        case 0xc007:
            return "TLS_ECDHE_ECDSA_WITH_RC4_128_SHA";
        case 0xc008:
            return "TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA";
        case 0xfefe:
            return "SSL_RSA_FIPS_WITH_DES_CBC_SHA";
        case 0xfeff:
            return "SSL_RSA_FIPS_WITH_3DES_EDE_CBC_SHA";
        case 0xc009:
            return "TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA";
        case 0xc00a:
            return "TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA";
        case 0xc00b:
            return "TLS_ECDH_RSA_WITH_NULL_SHA";
        case 0xff85:
            return "TLS_GOST2012_WITH_GOST8912_GOST8912";
        case 0xff87:
            return "TLS_GOST2012_WITH_NULL_GOST12";
        case 0x0a0a:
        case 0x1a1a:
        case 0x2a2a:
        case 0x3a3a:
        case 0x4a4a:
        case 0x5a5a:
        case 0x6a6a:
        case 0x7a7a:
        case 0x8a8a:
        case 0x9a9a:
        case 0xaaaa:
        case 0xbaba:
        case 0xcaca:
        case 0xdada:
        case 0xeaea:
        case 0xfafa:
            return "GOOGLE_GREASE";
    }
}
