int hammingWeight1(uint32_t n) {
    uint8_t numbers;
    while(n)
    {
        numbers += (n & 0x01);
        n>>=1;
    }
    return numbers;
}

int hammingWeight2(uint32_t n) {
    uint8_t numbers;
    while(n)
    {
       n = n & (n-1);
       numbers++;
    }
    return numbers;
}
