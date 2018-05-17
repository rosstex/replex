/* ANSI-C code produced by gperf version 3.0.4 */
/* Command-line: gperf -m 100 --output-file=/tmp/hyperdex/client/keyop_info.cc /tmp/hyperdex/client/keyop_info.gperf  */
/* Computed positions: -k'1,6,8-9,11-15,18-19' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 18 "/tmp/hyperdex/client/keyop_info.gperf"

#include "client/keyop_info.h"
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#line 1 "/tmp/hyperdex/client/keyop_info.gperf"
struct hyperdex_client_keyop_info;
#if defined __GNUC_STDC_INLINE__
#undef __GNUC_STDC_INLINE__
#endif
#if defined __GNUC_GNU_INLINE__
#undef __GNUC_GNU_INLINE__
#endif
extern "C"
{;
#include <string.h>

#define TOTAL_KEYWORDS 119
#define MIN_WORD_LENGTH 3
#define MAX_WORD_LENGTH 24
#define MIN_HASH_VALUE 6
#define MAX_HASH_VALUE 269
/* maximum key range = 264, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
_hyperdex_client_keyop_info_hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270,   1, 270,   2,  14,   1,
        3,  42,   1,  13,   5,   1, 270, 270,  67,   1,
       44,   5,  21, 270,  33,  42,   3,   6,  60, 270,
       75, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
      270, 270, 270, 270, 270, 270
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[18]];
      /*FALLTHROUGH*/
      case 18:
        hval += asso_values[(unsigned char)str[17]];
      /*FALLTHROUGH*/
      case 17:
      case 16:
      case 15:
        hval += asso_values[(unsigned char)str[14]];
      /*FALLTHROUGH*/
      case 14:
        hval += asso_values[(unsigned char)str[13]];
      /*FALLTHROUGH*/
      case 13:
        hval += asso_values[(unsigned char)str[12]];
      /*FALLTHROUGH*/
      case 12:
        hval += asso_values[(unsigned char)str[11]];
      /*FALLTHROUGH*/
      case 11:
        hval += asso_values[(unsigned char)str[10]];
      /*FALLTHROUGH*/
      case 10:
      case 9:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

struct hyperdex_client_keyop_info_string_pool_t
  {
    char hyperdex_client_keyop_info_string_pool_str6[sizeof("del")];
    char hyperdex_client_keyop_info_string_pool_str11[sizeof("map_add")];
    char hyperdex_client_keyop_info_string_pool_str15[sizeof("atomic_min")];
    char hyperdex_client_keyop_info_string_pool_str16[sizeof("atomic_max")];
    char hyperdex_client_keyop_info_string_pool_str17[sizeof("atomic_div")];
    char hyperdex_client_keyop_info_string_pool_str18[sizeof("atomic_add")];
    char hyperdex_client_keyop_info_string_pool_str19[sizeof("atomic_mod")];
    char hyperdex_client_keyop_info_string_pool_str20[sizeof("atomic_mul")];
    char hyperdex_client_keyop_info_string_pool_str24[sizeof("put")];
    char hyperdex_client_keyop_info_string_pool_str25[sizeof("uxact_put")];
    char hyperdex_client_keyop_info_string_pool_str29[sizeof("map_atomic_add")];
    char hyperdex_client_keyop_info_string_pool_str30[sizeof("map_atomic_mod")];
    char hyperdex_client_keyop_info_string_pool_str32[sizeof("group_put")];
    char hyperdex_client_keyop_info_string_pool_str33[sizeof("cond_put")];
    char hyperdex_client_keyop_info_string_pool_str34[sizeof("cond_atomic_add")];
    char hyperdex_client_keyop_info_string_pool_str35[sizeof("cond_atomic_mod")];
    char hyperdex_client_keyop_info_string_pool_str36[sizeof("uxact_atomic_min")];
    char hyperdex_client_keyop_info_string_pool_str37[sizeof("uxact_atomic_max")];
    char hyperdex_client_keyop_info_string_pool_str38[sizeof("uxact_atomic_div")];
    char hyperdex_client_keyop_info_string_pool_str39[sizeof("uxact_atomic_add")];
    char hyperdex_client_keyop_info_string_pool_str40[sizeof("uxact_atomic_mod")];
    char hyperdex_client_keyop_info_string_pool_str41[sizeof("uxact_atomic_mul")];
    char hyperdex_client_keyop_info_string_pool_str42[sizeof("cond_map_add")];
    char hyperdex_client_keyop_info_string_pool_str43[sizeof("group_atomic_min")];
    char hyperdex_client_keyop_info_string_pool_str44[sizeof("group_atomic_max")];
    char hyperdex_client_keyop_info_string_pool_str45[sizeof("group_atomic_div")];
    char hyperdex_client_keyop_info_string_pool_str46[sizeof("group_atomic_add")];
    char hyperdex_client_keyop_info_string_pool_str47[sizeof("group_atomic_mod")];
    char hyperdex_client_keyop_info_string_pool_str48[sizeof("group_atomic_mul")];
    char hyperdex_client_keyop_info_string_pool_str50[sizeof("atomic_or")];
    char hyperdex_client_keyop_info_string_pool_str51[sizeof("uxact_map_add")];
    char hyperdex_client_keyop_info_string_pool_str52[sizeof("set_add")];
    char hyperdex_client_keyop_info_string_pool_str58[sizeof("map_atomic_or")];
    char hyperdex_client_keyop_info_string_pool_str59[sizeof("atomic_and")];
    char hyperdex_client_keyop_info_string_pool_str60[sizeof("cond_map_atomic_add")];
    char hyperdex_client_keyop_info_string_pool_str61[sizeof("atomic_sub")];
    char hyperdex_client_keyop_info_string_pool_str62[sizeof("cond_map_atomic_mod")];
    char hyperdex_client_keyop_info_string_pool_str63[sizeof("cond_atomic_or")];
    char hyperdex_client_keyop_info_string_pool_str65[sizeof("cond_set_add")];
    char hyperdex_client_keyop_info_string_pool_str66[sizeof("uxact_map_atomic_div")];
    char hyperdex_client_keyop_info_string_pool_str67[sizeof("uxact_map_atomic_add")];
    char hyperdex_client_keyop_info_string_pool_str68[sizeof("uxact_map_atomic_mod")];
    char hyperdex_client_keyop_info_string_pool_str69[sizeof("uxact_map_atomic_mul")];
    char hyperdex_client_keyop_info_string_pool_str70[sizeof("map_atomic_and")];
    char hyperdex_client_keyop_info_string_pool_str71[sizeof("uxact_atomic_or")];
    char hyperdex_client_keyop_info_string_pool_str72[sizeof("cond_atomic_min")];
    char hyperdex_client_keyop_info_string_pool_str73[sizeof("uxact_set_add")];
    char hyperdex_client_keyop_info_string_pool_str74[sizeof("cond_map_atomic_sub")];
    char hyperdex_client_keyop_info_string_pool_str75[sizeof("cond_atomic_and")];
    char hyperdex_client_keyop_info_string_pool_str78[sizeof("group_atomic_or")];
    char hyperdex_client_keyop_info_string_pool_str79[sizeof("cond_del")];
    char hyperdex_client_keyop_info_string_pool_str80[sizeof("uxact_atomic_and")];
    char hyperdex_client_keyop_info_string_pool_str82[sizeof("uxact_atomic_sub")];
    char hyperdex_client_keyop_info_string_pool_str83[sizeof("map_atomic_sub")];
    char hyperdex_client_keyop_info_string_pool_str85[sizeof("map_atomic_div")];
    char hyperdex_client_keyop_info_string_pool_str86[sizeof("cond_map_atomic_or")];
    char hyperdex_client_keyop_info_string_pool_str87[sizeof("group_atomic_and")];
    char hyperdex_client_keyop_info_string_pool_str88[sizeof("cond_atomic_sub")];
    char hyperdex_client_keyop_info_string_pool_str89[sizeof("group_atomic_sub")];
    char hyperdex_client_keyop_info_string_pool_str90[sizeof("cond_atomic_div")];
    char hyperdex_client_keyop_info_string_pool_str92[sizeof("cond_map_atomic_xor")];
    char hyperdex_client_keyop_info_string_pool_str93[sizeof("atomic_xor")];
    char hyperdex_client_keyop_info_string_pool_str95[sizeof("map_atomic_mul")];
    char hyperdex_client_keyop_info_string_pool_str99[sizeof("uxact_map_atomic_or")];
    char hyperdex_client_keyop_info_string_pool_str100[sizeof("cond_atomic_mul")];
    char hyperdex_client_keyop_info_string_pool_str101[sizeof("cond_map_atomic_and")];
    char hyperdex_client_keyop_info_string_pool_str104[sizeof("cond_atomic_max")];
    char hyperdex_client_keyop_info_string_pool_str108[sizeof("uxact_map_atomic_and")];
    char hyperdex_client_keyop_info_string_pool_str110[sizeof("uxact_map_atomic_sub")];
    char hyperdex_client_keyop_info_string_pool_str114[sizeof("uxact_atomic_xor")];
    char hyperdex_client_keyop_info_string_pool_str115[sizeof("cond_map_atomic_div")];
    char hyperdex_client_keyop_info_string_pool_str118[sizeof("map_remove")];
    char hyperdex_client_keyop_info_string_pool_str121[sizeof("group_atomic_xor")];
    char hyperdex_client_keyop_info_string_pool_str127[sizeof("cond_map_atomic_mul")];
    char hyperdex_client_keyop_info_string_pool_str132[sizeof("group_del")];
    char hyperdex_client_keyop_info_string_pool_str134[sizeof("map_atomic_xor")];
    char hyperdex_client_keyop_info_string_pool_str139[sizeof("cond_atomic_xor")];
    char hyperdex_client_keyop_info_string_pool_str142[sizeof("uxact_map_atomic_xor")];
    char hyperdex_client_keyop_info_string_pool_str144[sizeof("set_union")];
    char hyperdex_client_keyop_info_string_pool_str153[sizeof("map_string_append")];
    char hyperdex_client_keyop_info_string_pool_str155[sizeof("cond_set_union")];
    char hyperdex_client_keyop_info_string_pool_str156[sizeof("cond_string_append")];
    char hyperdex_client_keyop_info_string_pool_str158[sizeof("list_rpush")];
    char hyperdex_client_keyop_info_string_pool_str159[sizeof("set_remove")];
    char hyperdex_client_keyop_info_string_pool_str167[sizeof("uxact_set_union")];
    char hyperdex_client_keyop_info_string_pool_str169[sizeof("uxact_list_rpush")];
    char hyperdex_client_keyop_info_string_pool_str171[sizeof("uxact_document_rename")];
    char hyperdex_client_keyop_info_string_pool_str176[sizeof("group_list_rpush")];
    char hyperdex_client_keyop_info_string_pool_str178[sizeof("group_document_rename")];
    char hyperdex_client_keyop_info_string_pool_str180[sizeof("string_append")];
    char hyperdex_client_keyop_info_string_pool_str182[sizeof("cond_map_string_append")];
    char hyperdex_client_keyop_info_string_pool_str187[sizeof("uxact_map_remove")];
    char hyperdex_client_keyop_info_string_pool_str188[sizeof("map_string_prepend")];
    char hyperdex_client_keyop_info_string_pool_str189[sizeof("cond_map_remove")];
    char hyperdex_client_keyop_info_string_pool_str190[sizeof("uxact_string_append")];
    char hyperdex_client_keyop_info_string_pool_str192[sizeof("list_lpush")];
    char hyperdex_client_keyop_info_string_pool_str194[sizeof("document_unset")];
    char hyperdex_client_keyop_info_string_pool_str195[sizeof("document_rename")];
    char hyperdex_client_keyop_info_string_pool_str196[sizeof("cond_put_or_create")];
    char hyperdex_client_keyop_info_string_pool_str197[sizeof("group_string_append")];
    char hyperdex_client_keyop_info_string_pool_str198[sizeof("uxact_set_intersect")];
    char hyperdex_client_keyop_info_string_pool_str199[sizeof("uxact_map_string_append")];
    char hyperdex_client_keyop_info_string_pool_str203[sizeof("uxact_list_lpush")];
    char hyperdex_client_keyop_info_string_pool_str208[sizeof("uxact_document_unset")];
    char hyperdex_client_keyop_info_string_pool_str209[sizeof("uxact_set_remove")];
    char hyperdex_client_keyop_info_string_pool_str210[sizeof("group_list_lpush")];
    char hyperdex_client_keyop_info_string_pool_str212[sizeof("cond_set_remove")];
    char hyperdex_client_keyop_info_string_pool_str215[sizeof("group_document_unset")];
    char hyperdex_client_keyop_info_string_pool_str216[sizeof("cond_map_string_prepend")];
    char hyperdex_client_keyop_info_string_pool_str220[sizeof("set_intersect")];
    char hyperdex_client_keyop_info_string_pool_str231[sizeof("uxact_map_string_prepend")];
    char hyperdex_client_keyop_info_string_pool_str232[sizeof("cond_set_intersect")];
    char hyperdex_client_keyop_info_string_pool_str233[sizeof("string_prepend")];
    char hyperdex_client_keyop_info_string_pool_str235[sizeof("cond_list_rpush")];
    char hyperdex_client_keyop_info_string_pool_str248[sizeof("put_if_not_exist")];
    char hyperdex_client_keyop_info_string_pool_str253[sizeof("cond_string_prepend")];
    char hyperdex_client_keyop_info_string_pool_str261[sizeof("uxact_string_prepend")];
    char hyperdex_client_keyop_info_string_pool_str268[sizeof("group_string_prepend")];
    char hyperdex_client_keyop_info_string_pool_str269[sizeof("cond_list_lpush")];
  };
static const struct hyperdex_client_keyop_info_string_pool_t hyperdex_client_keyop_info_string_pool_contents =
  {
    "del",
    "map_add",
    "atomic_min",
    "atomic_max",
    "atomic_div",
    "atomic_add",
    "atomic_mod",
    "atomic_mul",
    "put",
    "uxact_put",
    "map_atomic_add",
    "map_atomic_mod",
    "group_put",
    "cond_put",
    "cond_atomic_add",
    "cond_atomic_mod",
    "uxact_atomic_min",
    "uxact_atomic_max",
    "uxact_atomic_div",
    "uxact_atomic_add",
    "uxact_atomic_mod",
    "uxact_atomic_mul",
    "cond_map_add",
    "group_atomic_min",
    "group_atomic_max",
    "group_atomic_div",
    "group_atomic_add",
    "group_atomic_mod",
    "group_atomic_mul",
    "atomic_or",
    "uxact_map_add",
    "set_add",
    "map_atomic_or",
    "atomic_and",
    "cond_map_atomic_add",
    "atomic_sub",
    "cond_map_atomic_mod",
    "cond_atomic_or",
    "cond_set_add",
    "uxact_map_atomic_div",
    "uxact_map_atomic_add",
    "uxact_map_atomic_mod",
    "uxact_map_atomic_mul",
    "map_atomic_and",
    "uxact_atomic_or",
    "cond_atomic_min",
    "uxact_set_add",
    "cond_map_atomic_sub",
    "cond_atomic_and",
    "group_atomic_or",
    "cond_del",
    "uxact_atomic_and",
    "uxact_atomic_sub",
    "map_atomic_sub",
    "map_atomic_div",
    "cond_map_atomic_or",
    "group_atomic_and",
    "cond_atomic_sub",
    "group_atomic_sub",
    "cond_atomic_div",
    "cond_map_atomic_xor",
    "atomic_xor",
    "map_atomic_mul",
    "uxact_map_atomic_or",
    "cond_atomic_mul",
    "cond_map_atomic_and",
    "cond_atomic_max",
    "uxact_map_atomic_and",
    "uxact_map_atomic_sub",
    "uxact_atomic_xor",
    "cond_map_atomic_div",
    "map_remove",
    "group_atomic_xor",
    "cond_map_atomic_mul",
    "group_del",
    "map_atomic_xor",
    "cond_atomic_xor",
    "uxact_map_atomic_xor",
    "set_union",
    "map_string_append",
    "cond_set_union",
    "cond_string_append",
    "list_rpush",
    "set_remove",
    "uxact_set_union",
    "uxact_list_rpush",
    "uxact_document_rename",
    "group_list_rpush",
    "group_document_rename",
    "string_append",
    "cond_map_string_append",
    "uxact_map_remove",
    "map_string_prepend",
    "cond_map_remove",
    "uxact_string_append",
    "list_lpush",
    "document_unset",
    "document_rename",
    "cond_put_or_create",
    "group_string_append",
    "uxact_set_intersect",
    "uxact_map_string_append",
    "uxact_list_lpush",
    "uxact_document_unset",
    "uxact_set_remove",
    "group_list_lpush",
    "cond_set_remove",
    "group_document_unset",
    "cond_map_string_prepend",
    "set_intersect",
    "uxact_map_string_prepend",
    "cond_set_intersect",
    "string_prepend",
    "cond_list_rpush",
    "put_if_not_exist",
    "cond_string_prepend",
    "uxact_string_prepend",
    "group_string_prepend",
    "cond_list_lpush"
  };
#define hyperdex_client_keyop_info_string_pool ((const char *) &hyperdex_client_keyop_info_string_pool_contents)
#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct hyperdex_client_keyop_info *
_hyperdex_client_keyop_info_lookup (register const char *str, register unsigned int len)
{
  static const struct hyperdex_client_keyop_info wordlist[] =
    {
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 29 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str6,                     true,  true,  false,  hyperdex::FUNC_FAIL},
      {-1}, {-1}, {-1}, {-1},
#line 100 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str11,                 false, true,  false,  hyperdex::FUNC_MAP_ADD},
      {-1}, {-1}, {-1},
#line 68 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str15,              false, true,  false,  hyperdex::FUNC_NUM_MIN},
#line 64 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str16,              false, true,  false,  hyperdex::FUNC_NUM_MAX},
#line 44 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str17,              false, true,  false,  hyperdex::FUNC_NUM_DIV},
#line 32 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str18,              false, true,  false,  hyperdex::FUNC_NUM_ADD},
#line 48 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str19,              false, true,  false,  hyperdex::FUNC_NUM_MOD},
#line 40 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str20,              false, true,  false,  hyperdex::FUNC_NUM_MUL},
      {-1}, {-1}, {-1},
#line 23 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str24,                     false, false, false,  hyperdex::FUNC_SET},
#line 24 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str25,               false, false, false,  hyperdex::FUNC_SET},
      {-1}, {-1}, {-1},
#line 106 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str29,          false, true,  false,  hyperdex::FUNC_NUM_ADD},
#line 124 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str30,          false, true,  false,  hyperdex::FUNC_NUM_MOD},
      {-1},
#line 27 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str32,               false, true,  false,  hyperdex::FUNC_SET},
#line 25 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str33,                false, true,  false,  hyperdex::FUNC_SET},
#line 34 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str34,         false, true,  false,  hyperdex::FUNC_NUM_ADD},
#line 50 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str35,         false, true,  false,  hyperdex::FUNC_NUM_MOD},
#line 69 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str36,        false, true,  false,  hyperdex::FUNC_NUM_MIN},
#line 65 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str37,        false, true,  false,  hyperdex::FUNC_NUM_MAX},
#line 45 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str38,        false, true,  false,  hyperdex::FUNC_NUM_DIV},
#line 33 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str39,        false, true,  false,  hyperdex::FUNC_NUM_ADD},
#line 49 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str40,        false, true,  false,  hyperdex::FUNC_NUM_MOD},
#line 41 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str41,        false, true,  false,  hyperdex::FUNC_NUM_MUL},
#line 102 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str42,            false, true,  false,  hyperdex::FUNC_MAP_ADD},
#line 71 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str43,        false, true,  false,  hyperdex::FUNC_NUM_MIN},
#line 67 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str44,        false, true,  false,  hyperdex::FUNC_NUM_MAX},
#line 47 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str45,        false, true,  false,  hyperdex::FUNC_NUM_DIV},
#line 35 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str46,        false, true,  false,  hyperdex::FUNC_NUM_ADD},
#line 51 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str47,        false, true,  false,  hyperdex::FUNC_NUM_MOD},
#line 43 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str48,        false, true,  false,  hyperdex::FUNC_NUM_MUL},
      {-1},
#line 56 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str50,               false, true,  false,  hyperdex::FUNC_NUM_OR},
#line 101 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str51,           false, true,  false,  hyperdex::FUNC_MAP_ADD},
#line 88 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str52,                 false, true,  false,  hyperdex::FUNC_SET_ADD},
      {-1}, {-1}, {-1}, {-1}, {-1},
#line 130 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str58,           false, true,  false,  hyperdex::FUNC_NUM_OR},
#line 52 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str59,              false, true,  false,  hyperdex::FUNC_NUM_AND},
#line 114 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str60,     false, true,  false,  hyperdex::FUNC_NUM_ADD},
#line 36 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str61,              false, true,  false,  hyperdex::FUNC_NUM_SUB},
#line 126 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str62,     false, true,  false,  hyperdex::FUNC_NUM_MOD},
#line 58 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str63,          false, true,  false,  hyperdex::FUNC_NUM_OR},
      {-1},
#line 90 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str65,            false, true,  false,  hyperdex::FUNC_SET_ADD},
#line 122 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str66,    false, true,  false,  hyperdex::FUNC_NUM_DIV},
#line 107 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str67,    false, true,  false,  hyperdex::FUNC_NUM_ADD},
#line 125 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str68,    false, true,  false,  hyperdex::FUNC_NUM_MOD},
#line 119 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str69,    false, true,  false,  hyperdex::FUNC_NUM_MUL},
#line 127 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str70,          false, true,  false,  hyperdex::FUNC_NUM_AND},
#line 57 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str71,         false, true,  false,  hyperdex::FUNC_NUM_OR},
#line 70 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str72,         false, true,  false,  hyperdex::FUNC_NUM_MIN},
#line 89 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str73,           false, true,  false,  hyperdex::FUNC_SET_ADD},
#line 117 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str74,     false, true,  false,  hyperdex::FUNC_NUM_SUB},
#line 54 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str75,         false, true,  false,  hyperdex::FUNC_NUM_AND},
      {-1}, {-1},
#line 59 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str78,         false, true,  false,  hyperdex::FUNC_NUM_OR},
#line 30 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str79,                true,  true,  false,  hyperdex::FUNC_FAIL},
#line 53 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str80,        false, true,  false,  hyperdex::FUNC_NUM_AND},
      {-1},
#line 37 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str82,        false, true,  false,  hyperdex::FUNC_NUM_SUB},
#line 115 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str83,          false, true,  false,  hyperdex::FUNC_NUM_SUB},
      {-1},
#line 121 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str85,          false, true,  false,  hyperdex::FUNC_NUM_DIV},
#line 132 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str86,      false, true,  false,  hyperdex::FUNC_NUM_OR},
#line 55 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str87,        false, true,  false,  hyperdex::FUNC_NUM_AND},
#line 38 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str88,         false, true,  false,  hyperdex::FUNC_NUM_SUB},
#line 39 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str89,        false, true,  false,  hyperdex::FUNC_NUM_SUB},
#line 46 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str90,         false, true,  false,  hyperdex::FUNC_NUM_DIV},
      {-1},
#line 135 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str92,     false, true,  false,  hyperdex::FUNC_NUM_XOR},
#line 60 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str93,              false, true,  false,  hyperdex::FUNC_NUM_XOR},
      {-1},
#line 118 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str95,          false, true,  false,  hyperdex::FUNC_NUM_MUL},
      {-1}, {-1}, {-1},
#line 131 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str99,     false, true,  false,  hyperdex::FUNC_NUM_OR},
#line 42 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str100,         false, true,  false,  hyperdex::FUNC_NUM_MUL},
#line 129 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str101,     false, true,  false,  hyperdex::FUNC_NUM_AND},
      {-1}, {-1},
#line 66 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str104,         false, true,  false,  hyperdex::FUNC_NUM_MAX},
      {-1}, {-1}, {-1},
#line 128 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str108,    false, true,  false,  hyperdex::FUNC_NUM_AND},
      {-1},
#line 116 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str110,    false, true,  false,  hyperdex::FUNC_NUM_SUB},
      {-1}, {-1}, {-1},
#line 61 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str114,        false, true,  false,  hyperdex::FUNC_NUM_XOR},
#line 123 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str115,     false, true,  false,  hyperdex::FUNC_NUM_DIV},
      {-1}, {-1},
#line 103 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str118,              false, true,  false,  hyperdex::FUNC_MAP_REMOVE},
      {-1}, {-1},
#line 63 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str121,        false, true,  false,  hyperdex::FUNC_NUM_XOR},
      {-1}, {-1}, {-1}, {-1}, {-1},
#line 120 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str127,     false, true,  false,  hyperdex::FUNC_NUM_MUL},
      {-1}, {-1}, {-1}, {-1},
#line 31 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str132,               true,  true,  false,  hyperdex::FUNC_FAIL},
      {-1},
#line 133 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str134,          false, true,  false,  hyperdex::FUNC_NUM_XOR},
      {-1}, {-1}, {-1}, {-1},
#line 62 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str139,         false, true,  false,  hyperdex::FUNC_NUM_XOR},
      {-1}, {-1},
#line 134 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str142,    false, true,  false,  hyperdex::FUNC_NUM_XOR},
      {-1},
#line 97 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str144,               false, true,  false,  hyperdex::FUNC_SET_UNION},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 139 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str153,       false, true,  false,  hyperdex::FUNC_STRING_APPEND},
      {-1},
#line 99 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str155,          false, true,  false,  hyperdex::FUNC_SET_UNION},
#line 78 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str156,      false, true,  false,  hyperdex::FUNC_STRING_APPEND},
      {-1},
#line 84 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str158,              false, true,  false,  hyperdex::FUNC_LIST_RPUSH},
#line 91 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str159,              false, true,  false,  hyperdex::FUNC_SET_REMOVE},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 98 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str167,         false, true,  false,  hyperdex::FUNC_SET_UNION},
      {-1},
#line 85 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str169,        false, true,  false,  hyperdex::FUNC_LIST_RPUSH},
      {-1},
#line 109 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str171,   false, true,  false,  hyperdex::FUNC_DOC_RENAME},
      {-1}, {-1}, {-1}, {-1},
#line 87 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str176,        false, true,  false,  hyperdex::FUNC_LIST_RPUSH},
      {-1},
#line 110 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str178,   false, true,  false,  hyperdex::FUNC_DOC_RENAME},
      {-1},
#line 76 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str180,           false, true,  false,  hyperdex::FUNC_STRING_APPEND},
      {-1},
#line 141 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str182,  false, true,  false,  hyperdex::FUNC_STRING_APPEND},
      {-1}, {-1}, {-1}, {-1},
#line 104 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str187,        false, true,  false,  hyperdex::FUNC_MAP_REMOVE},
#line 136 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str188,      false, true,  false,  hyperdex::FUNC_STRING_PREPEND},
#line 105 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str189,         false, true,  false,  hyperdex::FUNC_MAP_REMOVE},
#line 77 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str190,     false, true,  false,  hyperdex::FUNC_STRING_APPEND},
      {-1},
#line 80 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str192,              false, true,  false,  hyperdex::FUNC_LIST_LPUSH},
      {-1},
#line 111 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str194,          false, true,  false,  hyperdex::FUNC_DOC_UNSET},
#line 108 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str195,         false, true,  false,  hyperdex::FUNC_DOC_RENAME},
#line 26 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str196,      false, false, false,  hyperdex::FUNC_SET},
#line 79 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str197,     false, true,  false,  hyperdex::FUNC_STRING_APPEND},
#line 95 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str198,     false, true,  false,  hyperdex::FUNC_SET_INTERSECT},
#line 140 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str199, false, true,  false,  hyperdex::FUNC_STRING_APPEND},
      {-1}, {-1}, {-1},
#line 81 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str203,        false, true,  false,  hyperdex::FUNC_LIST_LPUSH},
      {-1}, {-1}, {-1}, {-1},
#line 112 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str208,    false, true,  false,  hyperdex::FUNC_DOC_UNSET},
#line 92 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str209,        false, true,  false,  hyperdex::FUNC_SET_REMOVE},
#line 83 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str210,        false, true,  false,  hyperdex::FUNC_LIST_LPUSH},
      {-1},
#line 93 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str212,         false, true,  false,  hyperdex::FUNC_SET_REMOVE},
      {-1}, {-1},
#line 113 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str215,    false, true,  false,  hyperdex::FUNC_DOC_UNSET},
#line 138 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str216, false, true,  false,  hyperdex::FUNC_STRING_PREPEND},
      {-1}, {-1}, {-1},
#line 94 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str220,           false, true,  false,  hyperdex::FUNC_SET_INTERSECT},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1},
#line 137 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str231,false, true,  false,  hyperdex::FUNC_STRING_PREPEND},
#line 96 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str232,      false, true,  false,  hyperdex::FUNC_SET_INTERSECT},
#line 72 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str233,          false, true,  false,  hyperdex::FUNC_STRING_PREPEND},
      {-1},
#line 86 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str235,         false, true,  false,  hyperdex::FUNC_LIST_RPUSH},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
      {-1}, {-1}, {-1},
#line 28 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str248,        false, false, true,   hyperdex::FUNC_SET},
      {-1}, {-1}, {-1}, {-1},
#line 74 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str253,     false, true,  false,  hyperdex::FUNC_STRING_PREPEND},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 73 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str261,    false, true,  false,  hyperdex::FUNC_STRING_PREPEND},
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 75 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str268,    false, true,  false,  hyperdex::FUNC_STRING_PREPEND},
#line 82 "/tmp/hyperdex/client/keyop_info.gperf"
      {(int)(long)&((struct hyperdex_client_keyop_info_string_pool_t *)0)->hyperdex_client_keyop_info_string_pool_str269,         false, true,  false,  hyperdex::FUNC_LIST_LPUSH}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = _hyperdex_client_keyop_info_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int o = wordlist[key].name;
          if (o >= 0)
            {
              register const char *s = o + hyperdex_client_keyop_info_string_pool;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &wordlist[key];
            }
        }
    }
  return 0;
}
#line 142 "/tmp/hyperdex/client/keyop_info.gperf"

}
const struct hyperdex_client_keyop_info*
hyperdex_client_keyop_info_lookup(const char* str, unsigned int len)
{
    return _hyperdex_client_keyop_info_lookup(str, len);
}
