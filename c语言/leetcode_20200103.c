int hammingWeight(uint32_t n) {
    uint8_t numbers;
    while(n)
    {
        numbers += (n & 0x01);
        n>>=1;
    }
    return numbers;
}
