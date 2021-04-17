#ifndef CUSTOM_CRC16_H
#define CUSTOM_CRC16_H





/**
 * The type of the CRC values.
 *
 * This type must be big enough to contain at least 16 bits.
 */
typedef uint_fast16_t crc16_t;


/**
 * Calculate the initial crc value.
 *
 * \return     The initial crc value.
 */
static inline crc16_t crc16_init(void)
{
    return 0x3aa3;
}


/**
 * Calculate the final crc value.
 *
 * \param[in] crc  The current crc value.
 * \return     The final crc value.
 */
static inline crc16_t crc16_finalize(crc16_t crc)
{
    return crc;
}


crc16_t crc16_update(crc16_t crc, const void *data, size_t data_len);



#endif      /* CUSTOM_CRC16_H */
