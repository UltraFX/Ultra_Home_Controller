/*
 * eeprom.c

MIT License

Copyright (c) 2017 Nicolas Dammin, UltraFX

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.


 */

#include <stdint.h>
#include "eeprom.h"

uint8_t eep_read_byte(uint16_t wAddress, uint8_t *pbyBuf)
{
    (void)wAddress;
    (void)pbyBuf;

    return 0;
}

uint8_t eep_read_array(uint16_t wAddress, uint8_t *pbyBuf, uint16_t wLength)
{
    uint16_t i = 0;

    while(wLength > 0)
    {
        eep_read_byte(wAddress+(i++), pbyBuf);
        pbyBuf++;
        wLength--;
    }

    return 0;
}

uint8_t eep_read_dword(uint16_t wAddress, uint32_t *pdwBuf)
{
    (void)wAddress;
    (void)pdwBuf;

    return 0;
}
