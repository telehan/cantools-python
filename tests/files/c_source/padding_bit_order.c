/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This file was generated by cantools version 29.2.1 Sun Nov 25 11:00:53 2018.
 */

#include <string.h>

#include "padding_bit_order.h"

#define ftoi(value) (*((uint32_t *)(&(value))))
#define itof(value) (*((float *)(&(value))))
#define dtoi(value) (*((uint64_t *)(&(value))))
#define itod(value) (*((double *)(&(value))))

ssize_t padding_bit_order_msg0_encode(
    uint8_t *dst_p,
    struct padding_bit_order_msg0_t *src_p,
    size_t size)
{
    if (size < 8) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    dst_p[0] |= ((src_p->b << 7) & 0x80);
    dst_p[0] |= ((src_p->a >> 8) & 0x7f);
    dst_p[1] |= ((src_p->a << 0) & 0xff);
    dst_p[4] |= ((src_p->d << 7) & 0x80);
    dst_p[4] |= ((src_p->c >> 8) & 0x7f);
    dst_p[5] |= ((src_p->c << 0) & 0xff);

    return (8);
}

int padding_bit_order_msg0_decode(
    struct padding_bit_order_msg0_t *dst_p,
    uint8_t *src_p,
    size_t size)
{
    if (size < 8) {
        return (-EINVAL);
    }

    memset(dst_p, 0, sizeof(*dst_p));

    dst_p->b |= ((uint8_t)(src_p[0] & 0x80) >> 7);
    dst_p->a |= ((uint16_t)(src_p[0] & 0x7f) << 8);
    dst_p->a |= ((uint16_t)(src_p[1] & 0xff) >> 0);
    dst_p->d |= ((uint8_t)(src_p[4] & 0x80) >> 7);
    dst_p->c |= ((uint16_t)(src_p[4] & 0x7f) << 8);
    dst_p->c |= ((uint16_t)(src_p[5] & 0xff) >> 0);

    return (0);
}

bool padding_bit_order_msg0_b_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

bool padding_bit_order_msg0_a_is_in_range(uint16_t value)
{
    return (value <= 32767u);
}

bool padding_bit_order_msg0_d_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

bool padding_bit_order_msg0_c_is_in_range(uint16_t value)
{
    return (value <= 32767u);
}

ssize_t padding_bit_order_msg1_encode(
    uint8_t *dst_p,
    struct padding_bit_order_msg1_t *src_p,
    size_t size)
{
    if (size < 8) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    dst_p[0] |= ((src_p->e << 0) & 0x01);
    dst_p[0] |= ((src_p->f << 1) & 0xfe);
    dst_p[1] |= ((src_p->f >> 7) & 0xff);
    dst_p[4] |= ((src_p->g << 0) & 0x01);
    dst_p[4] |= ((src_p->h << 1) & 0xfe);
    dst_p[5] |= ((src_p->h >> 7) & 0xff);

    return (8);
}

int padding_bit_order_msg1_decode(
    struct padding_bit_order_msg1_t *dst_p,
    uint8_t *src_p,
    size_t size)
{
    if (size < 8) {
        return (-EINVAL);
    }

    memset(dst_p, 0, sizeof(*dst_p));

    dst_p->e |= ((uint8_t)(src_p[0] & 0x01) >> 0);
    dst_p->f |= ((uint16_t)(src_p[0] & 0xfe) >> 1);
    dst_p->f |= ((uint16_t)(src_p[1] & 0xff) << 7);
    dst_p->g |= ((uint8_t)(src_p[4] & 0x01) >> 0);
    dst_p->h |= ((uint16_t)(src_p[4] & 0xfe) >> 1);
    dst_p->h |= ((uint16_t)(src_p[5] & 0xff) << 7);

    return (0);
}

bool padding_bit_order_msg1_e_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

bool padding_bit_order_msg1_f_is_in_range(uint16_t value)
{
    return (value <= 32767u);
}

bool padding_bit_order_msg1_g_is_in_range(uint8_t value)
{
    return (value <= 1u);
}

bool padding_bit_order_msg1_h_is_in_range(uint16_t value)
{
    return (value <= 32767u);
}

ssize_t padding_bit_order_msg2_encode(
    uint8_t *dst_p,
    struct padding_bit_order_msg2_t *src_p,
    size_t size)
{
    if (size < 8) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    dst_p[0] |= ((src_p->i << 0) & 0x0f);
    dst_p[0] |= ((src_p->j << 4) & 0xf0);
    dst_p[1] |= ((src_p->k << 0) & 0x0f);

    return (8);
}

int padding_bit_order_msg2_decode(
    struct padding_bit_order_msg2_t *dst_p,
    uint8_t *src_p,
    size_t size)
{
    if (size < 8) {
        return (-EINVAL);
    }

    memset(dst_p, 0, sizeof(*dst_p));

    dst_p->i |= ((uint8_t)(src_p[0] & 0x0f) >> 0);
    dst_p->j |= ((uint8_t)(src_p[0] & 0xf0) >> 4);
    dst_p->k |= ((uint8_t)(src_p[1] & 0x0f) >> 0);

    return (0);
}

bool padding_bit_order_msg2_i_is_in_range(uint8_t value)
{
    return (value <= 15u);
}

bool padding_bit_order_msg2_j_is_in_range(uint8_t value)
{
    return (value <= 15u);
}

bool padding_bit_order_msg2_k_is_in_range(uint8_t value)
{
    return (value <= 15u);
}

ssize_t padding_bit_order_msg3_encode(
    uint8_t *dst_p,
    struct padding_bit_order_msg3_t *src_p,
    size_t size)
{
    if (size < 8) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    dst_p[0] |= ((src_p->l >> 56) & 0xff);
    dst_p[1] |= ((src_p->l >> 48) & 0xff);
    dst_p[2] |= ((src_p->l >> 40) & 0xff);
    dst_p[3] |= ((src_p->l >> 32) & 0xff);
    dst_p[4] |= ((src_p->l >> 24) & 0xff);
    dst_p[5] |= ((src_p->l >> 16) & 0xff);
    dst_p[6] |= ((src_p->l >> 8) & 0xff);
    dst_p[7] |= ((src_p->l << 0) & 0xff);

    return (8);
}

int padding_bit_order_msg3_decode(
    struct padding_bit_order_msg3_t *dst_p,
    uint8_t *src_p,
    size_t size)
{
    if (size < 8) {
        return (-EINVAL);
    }

    memset(dst_p, 0, sizeof(*dst_p));

    dst_p->l |= ((uint64_t)(src_p[0] & 0xff) << 56);
    dst_p->l |= ((uint64_t)(src_p[1] & 0xff) << 48);
    dst_p->l |= ((uint64_t)(src_p[2] & 0xff) << 40);
    dst_p->l |= ((uint64_t)(src_p[3] & 0xff) << 32);
    dst_p->l |= ((uint64_t)(src_p[4] & 0xff) << 24);
    dst_p->l |= ((uint64_t)(src_p[5] & 0xff) << 16);
    dst_p->l |= ((uint64_t)(src_p[6] & 0xff) << 8);
    dst_p->l |= ((uint64_t)(src_p[7] & 0xff) >> 0);

    return (0);
}

bool padding_bit_order_msg3_l_is_in_range(uint64_t value)
{
    return (true);
}

ssize_t padding_bit_order_msg4_encode(
    uint8_t *dst_p,
    struct padding_bit_order_msg4_t *src_p,
    size_t size)
{
    if (size < 8) {
        return (-EINVAL);
    }

    memset(&dst_p[0], 0, 8);

    dst_p[0] |= ((src_p->m << 0) & 0xff);
    dst_p[1] |= ((src_p->m >> 8) & 0xff);
    dst_p[2] |= ((src_p->m >> 16) & 0xff);
    dst_p[3] |= ((src_p->m >> 24) & 0xff);
    dst_p[4] |= ((src_p->m >> 32) & 0xff);
    dst_p[5] |= ((src_p->m >> 40) & 0xff);
    dst_p[6] |= ((src_p->m >> 48) & 0xff);
    dst_p[7] |= ((src_p->m >> 56) & 0xff);

    return (8);
}

int padding_bit_order_msg4_decode(
    struct padding_bit_order_msg4_t *dst_p,
    uint8_t *src_p,
    size_t size)
{
    if (size < 8) {
        return (-EINVAL);
    }

    memset(dst_p, 0, sizeof(*dst_p));

    dst_p->m |= ((uint64_t)(src_p[0] & 0xff) >> 0);
    dst_p->m |= ((uint64_t)(src_p[1] & 0xff) << 8);
    dst_p->m |= ((uint64_t)(src_p[2] & 0xff) << 16);
    dst_p->m |= ((uint64_t)(src_p[3] & 0xff) << 24);
    dst_p->m |= ((uint64_t)(src_p[4] & 0xff) << 32);
    dst_p->m |= ((uint64_t)(src_p[5] & 0xff) << 40);
    dst_p->m |= ((uint64_t)(src_p[6] & 0xff) << 48);
    dst_p->m |= ((uint64_t)(src_p[7] & 0xff) << 56);

    return (0);
}

bool padding_bit_order_msg4_m_is_in_range(uint64_t value)
{
    return (true);
}
