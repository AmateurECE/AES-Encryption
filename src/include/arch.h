/*******************************************************************************
 * NAME:	    arch.h
 *
 * AUTHOR:	    Ethan D. Twardy
 *
 * DESCRIPTION:	    This is the interface for the architecture specific code.
 *
 * CREATED:	    12/07/2017
 *
 * LAST EDITED:	    12/07/2017
 ***/

/*******************************************************************************
 * API FUNCTIONS
 ***/

/* Perform AES encryption in an architecture specific way, using a 128-bit
 * operand at `src' and the 128-bit encryption key in `key', and placing the
 * 128-bit result at `dest'.
 */
int aes_enc(uint8_t * dest, uint8_t * src, uint8_t * key);

/* Perform AES decryption in an architecture specific way, using a 128-bit
 * operand at `src' and the 128-bit decryption key in `key', and placing the
 * 128-bit result at `dest'.
 */
int aes_dec(uint8_t * dest, uint8_t * src, uint8_t * key);

/******************************************************************************/
