
The plaintext is: [1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0]
Loading chaskey.elf ... 
test2

[       0 ins]   chaskey(...) @ 0x83e8 
    83E8  str     fp, [sp, #-4]!      ;  [0xaffffffc] <- 0   sp = affffffc 
    83EC  add     fp, sp, #0          ; fp = affffffc 
    83F0  sub     sp, sp, #0x44       ; sp = afffffb8 
    83F4  str     r0, [fp, #-0x38]    ;  [0xafffffc4] <- dead1000  
    83F8  str     r1, [fp, #-0x3c]    ;  [0xafffffc0] <- dead2000  
    83FC  str     r2, [fp, #-0x40]    ;  [0xafffffbc] <- dead3000  
    8400  mov     r3, #0x10           ; r3 = 00000010 
    8404  str     r3, [fp, #-0x14]    ;  [0xafffffe8] <- 10  
    8408  mov     r3, #0              ; r3 = 00000000 
    840C  str     r3, [fp, #-0x1c]    ;  [0xafffffe0] <- 0  
    8410  mov     r3, #0x87           ; r3 = 00000087 
    8414  str     r3, [fp, #-0x18]    ;  [0xafffffe4] <- 87  
    8418  sub     r3, fp, #0x34       ; r3 = afffffc8 
    841C  sub     r2, fp, #0x1c       ; r2 = afffffe0 
    8420  ldm     r2, {r0, r1}        ;         0 <- [0xafffffe0]         87 <- [0xafffffe4]  r0 = 00000000  r1 = 00000087 
    8424  stm     r3, {r0, r1}        ;  [0xafffffc8] <- 0    [0xafffffcc] <- 87  
    8428  ldr     r3, [fp, #-0x38]    ;  dead1000 <- [0xafffffc4]  r3 = dead1000 
    842C  ldr     r3, [r3]            ;         1 <- [0xdead1000]  r3 = 00000001 
    8430  lsl     r2, r3, #1          ; r2 = 00000002 
    8434  ldr     r3, [fp, #-0x38]    ;  dead1000 <- [0xafffffc4]  r3 = dead1000 
    8438  add     r3, r3, #0xc        ; r3 = dead100c 
    843C  ldr     r3, [r3]            ;         0 <- [0xdead100c]  r3 = 00000000 
    8440  lsr     r3, r3, #0x1f       ; r3 = 00000000 
    8444  lsl     r3, r3, #2          ; r3 = 00000000 
    8448  sub     r1, fp, #4          ; r1 = affffff8 
    844C  add     r3, r1, r3          ; r3 = affffff8 
    8450  ldr     r3, [r3, #-0x30]    ;         0 <- [0xafffffc8]  r3 = 00000000 
    8454  eor     r3, r3, r2          ; r3 = 00000002 
    8458  str     r3, [fp, #-0x2c]    ;  [0xafffffd0] <- 2  
    845C  ldr     r3, [fp, #-0x38]    ;  dead1000 <- [0xafffffc4]  r3 = dead1000 
    8460  add     r3, r3, #4          ; r3 = dead1004 
    8464  ldr     r3, [r3]            ;         0 <- [0xdead1004]  r3 = 00000000 
    8468  lsl     r2, r3, #1          ; r2 = 00000000 
    846C  ldr     r3, [fp, #-0x38]    ;  dead1000 <- [0xafffffc4]  r3 = dead1000 
    8470  ldr     r3, [r3]            ;         1 <- [0xdead1000]  r3 = 00000001 
    8474  lsr     r3, r3, #0x1f       ; r3 = 00000000 
    8478  orr     r3, r2, r3          ; r3 = 00000000 
    847C  str     r3, [fp, #-0x28]    ;  [0xafffffd4] <- 0  
    8480  ldr     r3, [fp, #-0x38]    ;  dead1000 <- [0xafffffc4]  r3 = dead1000 
    8484  add     r3, r3, #8          ; r3 = dead1008 
    8488  ldr     r3, [r3]            ;         2 <- [0xdead1008]  r3 = 00000002 
    848C  lsl     r2, r3, #1          ; r2 = 00000004 
    8490  ldr     r3, [fp, #-0x38]    ;  dead1000 <- [0xafffffc4]  r3 = dead1000 
    8494  add     r3, r3, #4          ; r3 = dead1004 
    8498  ldr     r3, [r3]            ;         0 <- [0xdead1004]  r3 = 00000000 
    849C  lsr     r3, r3, #0x1f       ; r3 = 00000000 
    84A0  orr     r3, r2, r3          ; r3 = 00000004 
    84A4  str     r3, [fp, #-0x24]    ;  [0xafffffd8] <- 4  
    84A8  ldr     r3, [fp, #-0x38]    ;  dead1000 <- [0xafffffc4]  r3 = dead1000 
    84AC  add     r3, r3, #0xc        ; r3 = dead100c 
    84B0  ldr     r3, [r3]            ;         0 <- [0xdead100c]  r3 = 00000000 
    84B4  lsl     r2, r3, #1          ; r2 = 00000000 
    84B8  ldr     r3, [fp, #-0x38]    ;  dead1000 <- [0xafffffc4]  r3 = dead1000 
    84BC  add     r3, r3, #8          ; r3 = dead1008 
    84C0  ldr     r3, [r3]            ;         2 <- [0xdead1008]  r3 = 00000002 
    84C4  lsr     r3, r3, #0x1f       ; r3 = 00000000 
    84C8  orr     r3, r2, r3          ; r3 = 00000000 
    84CC  str     r3, [fp, #-0x20]    ;  [0xafffffdc] <- 0  
    84D0  ldr     r3, [fp, #-0x38]    ;  dead1000 <- [0xafffffc4]  r3 = dead1000 
    84D4  ldr     r2, [r3]            ;         1 <- [0xdead1000]  r2 = 00000001 
    84D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    84DC  str     r2, [r3]            ;  [0xdead3000] <- 1  
    84E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    84E4  add     r3, r3, #4          ; r3 = dead3004 
    84E8  ldr     r2, [fp, #-0x38]    ;  dead1000 <- [0xafffffc4]  r2 = dead1000 
    84EC  ldr     r2, [r2, #4]        ;         0 <- [0xdead1004]  r2 = 00000000 
    84F0  str     r2, [r3]            ;  [0xdead3004] <- 0  
    84F4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    84F8  add     r3, r3, #8          ; r3 = dead3008 
    84FC  ldr     r2, [fp, #-0x38]    ;  dead1000 <- [0xafffffc4]  r2 = dead1000 
    8500  ldr     r2, [r2, #8]        ;         2 <- [0xdead1008]  r2 = 00000002 
    8504  str     r2, [r3]            ;  [0xdead3008] <- 2  
    8508  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    850C  add     r3, r3, #0xc        ; r3 = dead300c 
    8510  ldr     r2, [fp, #-0x38]    ;  dead1000 <- [0xafffffc4]  r2 = dead1000 
    8514  ldr     r2, [r2, #0xc]      ;         0 <- [0xdead100c]  r2 = 00000000 
    8518  str     r2, [r3]            ;  [0xdead300c] <- 0  
    851C  mov     r3, #0              ; r3 = 00000000 
    8520  str     r3, [fp, #-8]       ;  [0xaffffff4] <- 0  
    8524  b       #0x87e4             ; pc = 000087e4 
    87E4  ldr     r3, [fp, #-0x14]    ;        10 <- [0xafffffe8]  r3 = 00000010 
    87E8  sub     r3, r3, #4          ; r3 = 0000000c 
    87EC  ldr     r2, [fp, #-8]       ;         0 <- [0xaffffff4]  r2 = 00000000 
    87F0  cmp     r2, r3              ; cpsr = 800001d3 
    87F4  blt     #0x8528             ; pc = 00008528 
    8528  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    852C  ldr     r2, [r3]            ;         1 <- [0xdead3000]  r2 = 00000001 
    8530  ldr     r3, [fp, #-8]       ;         0 <- [0xaffffff4]  r3 = 00000000 
    8534  lsl     r3, r3, #2          ; r3 = 00000000 
    8538  ldr     r1, [fp, #-0x3c]    ;  dead2000 <- [0xafffffc0]  r1 = dead2000 
    853C  add     r3, r1, r3          ; r3 = dead2000 
    8540  ldr     r3, [r3]            ;         1 <- [0xdead2000]  r3 = 00000001 
    8544  eor     r2, r2, r3          ; r2 = 00000000 
    8548  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    854C  str     r2, [r3]            ;  [0xdead3000] <- 0  
    8550  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8554  add     r3, r3, #4          ; r3 = dead3004 
    8558  ldr     r1, [r3]            ;         0 <- [0xdead3004]  r1 = 00000000 
    855C  ldr     r3, [fp, #-8]       ;         0 <- [0xaffffff4]  r3 = 00000000 
    8560  add     r3, r3, #1          ; r3 = 00000001 
    8564  lsl     r3, r3, #2          ; r3 = 00000004 
    8568  ldr     r2, [fp, #-0x3c]    ;  dead2000 <- [0xafffffc0]  r2 = dead2000 
    856C  add     r3, r2, r3          ; r3 = dead2004 
    8570  ldr     r2, [r3]            ;         0 <- [0xdead2004]  r2 = 00000000 
    8574  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8578  add     r3, r3, #4          ; r3 = dead3004 
    857C  eor     r2, r2, r1          ; r2 = 00000000 
    8580  str     r2, [r3]            ;  [0xdead3004] <- 0  
    8584  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8588  add     r3, r3, #8          ; r3 = dead3008 
    858C  ldr     r1, [r3]            ;         2 <- [0xdead3008]  r1 = 00000002 
    8590  ldr     r3, [fp, #-8]       ;         0 <- [0xaffffff4]  r3 = 00000000 
    8594  add     r3, r3, #2          ; r3 = 00000002 
    8598  lsl     r3, r3, #2          ; r3 = 00000008 
    859C  ldr     r2, [fp, #-0x3c]    ;  dead2000 <- [0xafffffc0]  r2 = dead2000 
    85A0  add     r3, r2, r3          ; r3 = dead2008 
    85A4  ldr     r2, [r3]            ;         0 <- [0xdead2008]  r2 = 00000000 
    85A8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85AC  add     r3, r3, #8          ; r3 = dead3008 
    85B0  eor     r2, r2, r1          ; r2 = 00000002 
    85B4  str     r2, [r3]            ;  [0xdead3008] <- 2  
    85B8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85BC  add     r3, r3, #0xc        ; r3 = dead300c 
    85C0  ldr     r1, [r3]            ;         0 <- [0xdead300c]  r1 = 00000000 
    85C4  ldr     r3, [fp, #-8]       ;         0 <- [0xaffffff4]  r3 = 00000000 
    85C8  add     r3, r3, #3          ; r3 = 00000003 
    85CC  lsl     r3, r3, #2          ; r3 = 0000000c 
    85D0  ldr     r2, [fp, #-0x3c]    ;  dead2000 <- [0xafffffc0]  r2 = dead2000 
    85D4  add     r3, r2, r3          ; r3 = dead200c 
    85D8  ldr     r2, [r3]            ;         0 <- [0xdead200c]  r2 = 00000000 
    85DC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85E0  add     r3, r3, #0xc        ; r3 = dead300c 
    85E4  eor     r2, r2, r1          ; r2 = 00000000 
    85E8  str     r2, [r3]            ;  [0xdead300c] <- 0  
    85EC  mov     r3, #0              ; r3 = 00000000 
    85F0  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 0  
    85F4  b       #0x87cc             ; pc = 000087cc 
    87CC  ldr     r3, [fp, #-0xc]     ;         0 <- [0xaffffff0]  r3 = 00000000 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;         0 <- [0xdead3000]  r2 = 00000000 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;         0 <- [0xdead3004]  r3 = 00000000 
    860C  add     r2, r2, r3          ; r2 = 00000000 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 0  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;         0 <- [0xdead3004]  r2 = 00000000 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 00000000 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 0  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;         0 <- [0xdead3004]  r1 = 00000000 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;         0 <- [0xdead3000]  r2 = 00000000 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 00000000 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 0  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;         0 <- [0xdead3000]  r3 = 00000000 
    8660  ror     r2, r3, #0x10       ; r2 = 00000000 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 0  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;         2 <- [0xdead3008]  r1 = 00000002 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;         0 <- [0xdead300c]  r2 = 00000000 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 00000002 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 2  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;         0 <- [0xdead300c]  r2 = 00000000 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 00000000 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 0  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;         0 <- [0xdead300c]  r1 = 00000000 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;         2 <- [0xdead3008]  r2 = 00000002 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 00000002 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 2  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;         0 <- [0xdead3000]  r2 = 00000000 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;         2 <- [0xdead300c]  r3 = 00000002 
    86EC  add     r2, r2, r3          ; r2 = 00000002 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 2  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;         2 <- [0xdead300c]  r2 = 00000002 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 00004000 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 4000  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;      4000 <- [0xdead300c]  r1 = 00004000 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;         2 <- [0xdead3000]  r2 = 00000002 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 00004002 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 4002  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;         2 <- [0xdead3008]  r1 = 00000002 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;         0 <- [0xdead3004]  r2 = 00000000 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 00000002 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 2  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;         0 <- [0xdead3004]  r2 = 00000000 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 00000000 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 0  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;         0 <- [0xdead3004]  r1 = 00000000 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;         2 <- [0xdead3008]  r2 = 00000002 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 00000002 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 2  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;         2 <- [0xdead3008]  r2 = 00000002 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 00020000 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 20000  
    87C0  ldr     r3, [fp, #-0xc]     ;         0 <- [0xaffffff0]  r3 = 00000000 
    87C4  add     r3, r3, #1          ; r3 = 00000001 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 1  
    87CC  ldr     r3, [fp, #-0xc]     ;         1 <- [0xaffffff0]  r3 = 00000001 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;         2 <- [0xdead3000]  r2 = 00000002 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;         2 <- [0xdead3004]  r3 = 00000002 
    860C  add     r2, r2, r3          ; r2 = 00000004 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 4  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;         2 <- [0xdead3004]  r2 = 00000002 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 00000040 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 40  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;        40 <- [0xdead3004]  r1 = 00000040 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;         4 <- [0xdead3000]  r2 = 00000004 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 00000044 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 44  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;         4 <- [0xdead3000]  r3 = 00000004 
    8660  ror     r2, r3, #0x10       ; r2 = 00040000 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 40000  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;     20000 <- [0xdead3008]  r1 = 00020000 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;      4002 <- [0xdead300c]  r2 = 00004002 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 00024002 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 24002  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;      4002 <- [0xdead300c]  r2 = 00004002 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 00400200 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 400200  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;    400200 <- [0xdead300c]  r1 = 00400200 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;     24002 <- [0xdead3008]  r2 = 00024002 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 00424202 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 424202  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;     40000 <- [0xdead3000]  r2 = 00040000 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;    424202 <- [0xdead300c]  r3 = 00424202 
    86EC  add     r2, r2, r3          ; r2 = 00464202 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 464202  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;    424202 <- [0xdead300c]  r2 = 00424202 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 48404008 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 48404008  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  48404008 <- [0xdead300c]  r1 = 48404008 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;    464202 <- [0xdead3000]  r2 = 00464202 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 4806020a 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 4806020a  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;     24002 <- [0xdead3008]  r1 = 00024002 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;        44 <- [0xdead3004]  r2 = 00000044 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 00024046 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 24046  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;        44 <- [0xdead3004]  r2 = 00000044 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 00002200 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 2200  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;      2200 <- [0xdead3004]  r1 = 00002200 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;     24046 <- [0xdead3008]  r2 = 00024046 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 00026246 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 26246  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;     24046 <- [0xdead3008]  r2 = 00024046 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 40460002 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 40460002  
    87C0  ldr     r3, [fp, #-0xc]     ;         1 <- [0xaffffff0]  r3 = 00000001 
    87C4  add     r3, r3, #1          ; r3 = 00000002 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 2  
    87CC  ldr     r3, [fp, #-0xc]     ;         2 <- [0xaffffff0]  r3 = 00000002 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;    464202 <- [0xdead3000]  r2 = 00464202 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;     26246 <- [0xdead3004]  r3 = 00026246 
    860C  add     r2, r2, r3          ; r2 = 0048a448 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 48a448  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;     26246 <- [0xdead3004]  r2 = 00026246 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 004c48c0 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 4c48c0  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;    4c48c0 <- [0xdead3004]  r1 = 004c48c0 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;    48a448 <- [0xdead3000]  r2 = 0048a448 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 0004ec88 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 4ec88  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;    48a448 <- [0xdead3000]  r3 = 0048a448 
    8660  ror     r2, r3, #0x10       ; r2 = a4480048 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- a4480048  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  40460002 <- [0xdead3008]  r1 = 40460002 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  4806020a <- [0xdead300c]  r2 = 4806020a 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 884c020c 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 884c020c  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  4806020a <- [0xdead300c]  r2 = 4806020a 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 06020a48 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 6020a48  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;   6020a48 <- [0xdead300c]  r1 = 06020a48 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  884c020c <- [0xdead3008]  r2 = 884c020c 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 8e4e0844 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 8e4e0844  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  a4480048 <- [0xdead3000]  r2 = a4480048 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  8e4e0844 <- [0xdead300c]  r3 = 8e4e0844 
    86EC  add     r2, r2, r3          ; r2 = 3296088c 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 3296088c  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  8e4e0844 <- [0xdead300c]  r2 = 8e4e0844 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = c10891c9 
    8710  str     r2, [r3]            ;  [0xdead300c] <- c10891c9  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  c10891c9 <- [0xdead300c]  r1 = c10891c9 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  3296088c <- [0xdead3000]  r2 = 3296088c 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = f39e9945 
    8734  str     r2, [r3]            ;  [0xdead300c] <- f39e9945  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  884c020c <- [0xdead3008]  r1 = 884c020c 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;     4ec88 <- [0xdead3004]  r2 = 0004ec88 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 8850ee94 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 8850ee94  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;     4ec88 <- [0xdead3004]  r2 = 0004ec88 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 02764400 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 2764400  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;   2764400 <- [0xdead3004]  r1 = 02764400 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  8850ee94 <- [0xdead3008]  r2 = 8850ee94 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 8a26aa94 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 8a26aa94  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  8850ee94 <- [0xdead3008]  r2 = 8850ee94 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = ee948850 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- ee948850  
    87C0  ldr     r3, [fp, #-0xc]     ;         2 <- [0xaffffff0]  r3 = 00000002 
    87C4  add     r3, r3, #1          ; r3 = 00000003 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 3  
    87CC  ldr     r3, [fp, #-0xc]     ;         3 <- [0xaffffff0]  r3 = 00000003 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  3296088c <- [0xdead3000]  r2 = 3296088c 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  8a26aa94 <- [0xdead3004]  r3 = 8a26aa94 
    860C  add     r2, r2, r3          ; r2 = bcbcb320 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- bcbcb320  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  8a26aa94 <- [0xdead3004]  r2 = 8a26aa94 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 44d55291 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 44d55291  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  44d55291 <- [0xdead3004]  r1 = 44d55291 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  bcbcb320 <- [0xdead3000]  r2 = bcbcb320 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = f869e1b1 
    8654  str     r2, [r3]            ;  [0xdead3004] <- f869e1b1  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  bcbcb320 <- [0xdead3000]  r3 = bcbcb320 
    8660  ror     r2, r3, #0x10       ; r2 = b320bcbc 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- b320bcbc  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  ee948850 <- [0xdead3008]  r1 = ee948850 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  f39e9945 <- [0xdead300c]  r2 = f39e9945 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = e2332195 
    8690  str     r2, [r3]            ;  [0xdead3008] <- e2332195  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  f39e9945 <- [0xdead300c]  r2 = f39e9945 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 9e9945f3 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 9e9945f3  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  9e9945f3 <- [0xdead300c]  r1 = 9e9945f3 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  e2332195 <- [0xdead3008]  r2 = e2332195 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 7caa6466 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 7caa6466  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  b320bcbc <- [0xdead3000]  r2 = b320bcbc 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  7caa6466 <- [0xdead300c]  r3 = 7caa6466 
    86EC  add     r2, r2, r3          ; r2 = 2fcb2122 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 2fcb2122  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  7caa6466 <- [0xdead300c]  r2 = 7caa6466 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 4c8ccf95 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 4c8ccf95  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  4c8ccf95 <- [0xdead300c]  r1 = 4c8ccf95 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  2fcb2122 <- [0xdead3000]  r2 = 2fcb2122 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 6347eeb7 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 6347eeb7  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  e2332195 <- [0xdead3008]  r1 = e2332195 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  f869e1b1 <- [0xdead3004]  r2 = f869e1b1 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = da9d0346 
    875C  str     r2, [r3]            ;  [0xdead3008] <- da9d0346  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  f869e1b1 <- [0xdead3004]  r2 = f869e1b1 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 34f0d8fc 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 34f0d8fc  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  34f0d8fc <- [0xdead3004]  r1 = 34f0d8fc 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  da9d0346 <- [0xdead3008]  r2 = da9d0346 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = ee6ddbba 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- ee6ddbba  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  da9d0346 <- [0xdead3008]  r2 = da9d0346 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 0346da9d 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 346da9d  
    87C0  ldr     r3, [fp, #-0xc]     ;         3 <- [0xaffffff0]  r3 = 00000003 
    87C4  add     r3, r3, #1          ; r3 = 00000004 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 4  
    87CC  ldr     r3, [fp, #-0xc]     ;         4 <- [0xaffffff0]  r3 = 00000004 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  2fcb2122 <- [0xdead3000]  r2 = 2fcb2122 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  ee6ddbba <- [0xdead3004]  r3 = ee6ddbba 
    860C  add     r2, r2, r3          ; r2 = 1e38fcdc 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 1e38fcdc  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  ee6ddbba <- [0xdead3004]  r2 = ee6ddbba 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = cdbb775d 
    8630  str     r2, [r3]            ;  [0xdead3004] <- cdbb775d  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  cdbb775d <- [0xdead3004]  r1 = cdbb775d 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  1e38fcdc <- [0xdead3000]  r2 = 1e38fcdc 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = d3838b81 
    8654  str     r2, [r3]            ;  [0xdead3004] <- d3838b81  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  1e38fcdc <- [0xdead3000]  r3 = 1e38fcdc 
    8660  ror     r2, r3, #0x10       ; r2 = fcdc1e38 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- fcdc1e38  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;   346da9d <- [0xdead3008]  r1 = 0346da9d 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  6347eeb7 <- [0xdead300c]  r2 = 6347eeb7 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 668ec954 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 668ec954  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  6347eeb7 <- [0xdead300c]  r2 = 6347eeb7 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 47eeb763 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 47eeb763  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  47eeb763 <- [0xdead300c]  r1 = 47eeb763 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  668ec954 <- [0xdead3008]  r2 = 668ec954 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 21607e37 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 21607e37  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  fcdc1e38 <- [0xdead3000]  r2 = fcdc1e38 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  21607e37 <- [0xdead300c]  r3 = 21607e37 
    86EC  add     r2, r2, r3          ; r2 = 1e3c9c6f 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 1e3c9c6f  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  21607e37 <- [0xdead300c]  r2 = 21607e37 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 0fc6e42c 
    8710  str     r2, [r3]            ;  [0xdead300c] <- fc6e42c  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;   fc6e42c <- [0xdead300c]  r1 = 0fc6e42c 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  1e3c9c6f <- [0xdead3000]  r2 = 1e3c9c6f 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 11fa7843 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 11fa7843  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  668ec954 <- [0xdead3008]  r1 = 668ec954 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  d3838b81 <- [0xdead3004]  r2 = d3838b81 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 3a1254d5 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 3a1254d5  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  d3838b81 <- [0xdead3004]  r2 = d3838b81 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = c1c5c0e9 
    8778  str     r2, [r3]            ;  [0xdead3004] <- c1c5c0e9  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  c1c5c0e9 <- [0xdead3004]  r1 = c1c5c0e9 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  3a1254d5 <- [0xdead3008]  r2 = 3a1254d5 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = fbd7943c 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- fbd7943c  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  3a1254d5 <- [0xdead3008]  r2 = 3a1254d5 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 54d53a12 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 54d53a12  
    87C0  ldr     r3, [fp, #-0xc]     ;         4 <- [0xaffffff0]  r3 = 00000004 
    87C4  add     r3, r3, #1          ; r3 = 00000005 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 5  
    87CC  ldr     r3, [fp, #-0xc]     ;         5 <- [0xaffffff0]  r3 = 00000005 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  1e3c9c6f <- [0xdead3000]  r2 = 1e3c9c6f 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  fbd7943c <- [0xdead3004]  r3 = fbd7943c 
    860C  add     r2, r2, r3          ; r2 = 1a1430ab 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 1a1430ab  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  fbd7943c <- [0xdead3004]  r2 = fbd7943c 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 7af2879f 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 7af2879f  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  7af2879f <- [0xdead3004]  r1 = 7af2879f 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  1a1430ab <- [0xdead3000]  r2 = 1a1430ab 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 60e6b734 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 60e6b734  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  1a1430ab <- [0xdead3000]  r3 = 1a1430ab 
    8660  ror     r2, r3, #0x10       ; r2 = 30ab1a14 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 30ab1a14  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  54d53a12 <- [0xdead3008]  r1 = 54d53a12 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  11fa7843 <- [0xdead300c]  r2 = 11fa7843 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 66cfb255 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 66cfb255  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  11fa7843 <- [0xdead300c]  r2 = 11fa7843 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = fa784311 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- fa784311  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  fa784311 <- [0xdead300c]  r1 = fa784311 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  66cfb255 <- [0xdead3008]  r2 = 66cfb255 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 9cb7f144 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 9cb7f144  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  30ab1a14 <- [0xdead3000]  r2 = 30ab1a14 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  9cb7f144 <- [0xdead300c]  r3 = 9cb7f144 
    86EC  add     r2, r2, r3          ; r2 = cd630b58 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- cd630b58  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  9cb7f144 <- [0xdead300c]  r2 = 9cb7f144 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = fe289396 
    8710  str     r2, [r3]            ;  [0xdead300c] <- fe289396  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  fe289396 <- [0xdead300c]  r1 = fe289396 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  cd630b58 <- [0xdead3000]  r2 = cd630b58 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 334b98ce 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 334b98ce  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  66cfb255 <- [0xdead3008]  r1 = 66cfb255 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  60e6b734 <- [0xdead3004]  r2 = 60e6b734 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = c7b66989 
    875C  str     r2, [r3]            ;  [0xdead3008] <- c7b66989  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  60e6b734 <- [0xdead3004]  r2 = 60e6b734 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 735b9a30 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 735b9a30  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  735b9a30 <- [0xdead3004]  r1 = 735b9a30 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  c7b66989 <- [0xdead3008]  r2 = c7b66989 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = b4edf3b9 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- b4edf3b9  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  c7b66989 <- [0xdead3008]  r2 = c7b66989 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 6989c7b6 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 6989c7b6  
    87C0  ldr     r3, [fp, #-0xc]     ;         5 <- [0xaffffff0]  r3 = 00000005 
    87C4  add     r3, r3, #1          ; r3 = 00000006 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 6  
    87CC  ldr     r3, [fp, #-0xc]     ;         6 <- [0xaffffff0]  r3 = 00000006 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  cd630b58 <- [0xdead3000]  r2 = cd630b58 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  b4edf3b9 <- [0xdead3004]  r3 = b4edf3b9 
    860C  add     r2, r2, r3          ; r2 = 8250ff11 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 8250ff11  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  b4edf3b9 <- [0xdead3004]  r2 = b4edf3b9 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 9dbe7736 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 9dbe7736  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  9dbe7736 <- [0xdead3004]  r1 = 9dbe7736 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  8250ff11 <- [0xdead3000]  r2 = 8250ff11 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 1fee8827 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 1fee8827  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  8250ff11 <- [0xdead3000]  r3 = 8250ff11 
    8660  ror     r2, r3, #0x10       ; r2 = ff118250 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- ff118250  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  6989c7b6 <- [0xdead3008]  r1 = 6989c7b6 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  334b98ce <- [0xdead300c]  r2 = 334b98ce 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 9cd56084 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 9cd56084  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  334b98ce <- [0xdead300c]  r2 = 334b98ce 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 4b98ce33 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 4b98ce33  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  4b98ce33 <- [0xdead300c]  r1 = 4b98ce33 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  9cd56084 <- [0xdead3008]  r2 = 9cd56084 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = d74daeb7 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- d74daeb7  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  ff118250 <- [0xdead3000]  r2 = ff118250 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  d74daeb7 <- [0xdead300c]  r3 = d74daeb7 
    86EC  add     r2, r2, r3          ; r2 = d65f3107 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- d65f3107  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  d74daeb7 <- [0xdead300c]  r2 = d74daeb7 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = b5d6fae9 
    8710  str     r2, [r3]            ;  [0xdead300c] <- b5d6fae9  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  b5d6fae9 <- [0xdead300c]  r1 = b5d6fae9 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  d65f3107 <- [0xdead3000]  r2 = d65f3107 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 6389cbee 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 6389cbee  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  9cd56084 <- [0xdead3008]  r1 = 9cd56084 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  1fee8827 <- [0xdead3004]  r2 = 1fee8827 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = bcc3e8ab 
    875C  str     r2, [r3]            ;  [0xdead3008] <- bcc3e8ab  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  1fee8827 <- [0xdead3004]  r2 = 1fee8827 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = f744138f 
    8778  str     r2, [r3]            ;  [0xdead3004] <- f744138f  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  f744138f <- [0xdead3004]  r1 = f744138f 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  bcc3e8ab <- [0xdead3008]  r2 = bcc3e8ab 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 4b87fb24 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 4b87fb24  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  bcc3e8ab <- [0xdead3008]  r2 = bcc3e8ab 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = e8abbcc3 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- e8abbcc3  
    87C0  ldr     r3, [fp, #-0xc]     ;         6 <- [0xaffffff0]  r3 = 00000006 
    87C4  add     r3, r3, #1          ; r3 = 00000007 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 7  
    87CC  ldr     r3, [fp, #-0xc]     ;         7 <- [0xaffffff0]  r3 = 00000007 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  d65f3107 <- [0xdead3000]  r2 = d65f3107 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  4b87fb24 <- [0xdead3004]  r3 = 4b87fb24 
    860C  add     r2, r2, r3          ; r2 = 21e72c2b 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 21e72c2b  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  4b87fb24 <- [0xdead3004]  r2 = 4b87fb24 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 70ff6489 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 70ff6489  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  70ff6489 <- [0xdead3004]  r1 = 70ff6489 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  21e72c2b <- [0xdead3000]  r2 = 21e72c2b 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 511848a2 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 511848a2  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  21e72c2b <- [0xdead3000]  r3 = 21e72c2b 
    8660  ror     r2, r3, #0x10       ; r2 = 2c2b21e7 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 2c2b21e7  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  e8abbcc3 <- [0xdead3008]  r1 = e8abbcc3 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  6389cbee <- [0xdead300c]  r2 = 6389cbee 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 4c3588b1 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 4c3588b1  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  6389cbee <- [0xdead300c]  r2 = 6389cbee 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 89cbee63 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 89cbee63  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  89cbee63 <- [0xdead300c]  r1 = 89cbee63 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  4c3588b1 <- [0xdead3008]  r2 = 4c3588b1 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = c5fe66d2 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- c5fe66d2  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  2c2b21e7 <- [0xdead3000]  r2 = 2c2b21e7 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  c5fe66d2 <- [0xdead300c]  r3 = c5fe66d2 
    86EC  add     r2, r2, r3          ; r2 = f22988b9 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- f22988b9  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  c5fe66d2 <- [0xdead300c]  r2 = c5fe66d2 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = ccda58bf 
    8710  str     r2, [r3]            ;  [0xdead300c] <- ccda58bf  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  ccda58bf <- [0xdead300c]  r1 = ccda58bf 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  f22988b9 <- [0xdead3000]  r2 = f22988b9 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 3ef3d006 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 3ef3d006  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  4c3588b1 <- [0xdead3008]  r1 = 4c3588b1 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  511848a2 <- [0xdead3004]  r2 = 511848a2 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 9d4dd153 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 9d4dd153  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  511848a2 <- [0xdead3004]  r2 = 511848a2 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 8c245128 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 8c245128  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  8c245128 <- [0xdead3004]  r1 = 8c245128 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  9d4dd153 <- [0xdead3008]  r2 = 9d4dd153 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 1169807b 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 1169807b  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  9d4dd153 <- [0xdead3008]  r2 = 9d4dd153 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = d1539d4d 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- d1539d4d  
    87C0  ldr     r3, [fp, #-0xc]     ;         7 <- [0xaffffff0]  r3 = 00000007 
    87C4  add     r3, r3, #1          ; r3 = 00000008 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 8  
    87CC  ldr     r3, [fp, #-0xc]     ;         8 <- [0xaffffff0]  r3 = 00000008 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  f22988b9 <- [0xdead3000]  r2 = f22988b9 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  1169807b <- [0xdead3004]  r3 = 1169807b 
    860C  add     r2, r2, r3          ; r2 = 03930934 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 3930934  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  1169807b <- [0xdead3004]  r2 = 1169807b 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 2d300f62 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 2d300f62  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  2d300f62 <- [0xdead3004]  r1 = 2d300f62 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;   3930934 <- [0xdead3000]  r2 = 03930934 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 2ea30656 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 2ea30656  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;   3930934 <- [0xdead3000]  r3 = 03930934 
    8660  ror     r2, r3, #0x10       ; r2 = 09340393 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 9340393  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  d1539d4d <- [0xdead3008]  r1 = d1539d4d 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  3ef3d006 <- [0xdead300c]  r2 = 3ef3d006 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 10476d53 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 10476d53  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  3ef3d006 <- [0xdead300c]  r2 = 3ef3d006 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = f3d0063e 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- f3d0063e  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  f3d0063e <- [0xdead300c]  r1 = f3d0063e 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  10476d53 <- [0xdead3008]  r2 = 10476d53 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = e3976b6d 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- e3976b6d  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;   9340393 <- [0xdead3000]  r2 = 09340393 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  e3976b6d <- [0xdead300c]  r3 = e3976b6d 
    86EC  add     r2, r2, r3          ; r2 = eccb6f00 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- eccb6f00  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  e3976b6d <- [0xdead300c]  r2 = e3976b6d 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = ed6dbc72 
    8710  str     r2, [r3]            ;  [0xdead300c] <- ed6dbc72  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  ed6dbc72 <- [0xdead300c]  r1 = ed6dbc72 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  eccb6f00 <- [0xdead3000]  r2 = eccb6f00 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 01a6d372 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 1a6d372  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  10476d53 <- [0xdead3008]  r1 = 10476d53 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  2ea30656 <- [0xdead3004]  r2 = 2ea30656 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 3eea73a9 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 3eea73a9  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  2ea30656 <- [0xdead3004]  r2 = 2ea30656 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 51832b17 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 51832b17  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  51832b17 <- [0xdead3004]  r1 = 51832b17 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  3eea73a9 <- [0xdead3008]  r2 = 3eea73a9 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 6f6958be 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 6f6958be  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  3eea73a9 <- [0xdead3008]  r2 = 3eea73a9 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 73a93eea 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 73a93eea  
    87C0  ldr     r3, [fp, #-0xc]     ;         8 <- [0xaffffff0]  r3 = 00000008 
    87C4  add     r3, r3, #1          ; r3 = 00000009 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 9  
    87CC  ldr     r3, [fp, #-0xc]     ;         9 <- [0xaffffff0]  r3 = 00000009 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  eccb6f00 <- [0xdead3000]  r2 = eccb6f00 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  6f6958be <- [0xdead3004]  r3 = 6f6958be 
    860C  add     r2, r2, r3          ; r2 = 5c34c7be 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 5c34c7be  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  6f6958be <- [0xdead3004]  r2 = 6f6958be 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = ed2b17cd 
    8630  str     r2, [r3]            ;  [0xdead3004] <- ed2b17cd  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  ed2b17cd <- [0xdead3004]  r1 = ed2b17cd 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  5c34c7be <- [0xdead3000]  r2 = 5c34c7be 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = b11fd073 
    8654  str     r2, [r3]            ;  [0xdead3004] <- b11fd073  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  5c34c7be <- [0xdead3000]  r3 = 5c34c7be 
    8660  ror     r2, r3, #0x10       ; r2 = c7be5c34 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- c7be5c34  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  73a93eea <- [0xdead3008]  r1 = 73a93eea 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;   1a6d372 <- [0xdead300c]  r2 = 01a6d372 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 7550125c 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 7550125c  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;   1a6d372 <- [0xdead300c]  r2 = 01a6d372 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = a6d37201 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- a6d37201  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  a6d37201 <- [0xdead300c]  r1 = a6d37201 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  7550125c <- [0xdead3008]  r2 = 7550125c 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = d383605d 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- d383605d  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  c7be5c34 <- [0xdead3000]  r2 = c7be5c34 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  d383605d <- [0xdead300c]  r3 = d383605d 
    86EC  add     r2, r2, r3          ; r2 = 9b41bc91 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 9b41bc91  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  d383605d <- [0xdead300c]  r2 = d383605d 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 6c0bba70 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 6c0bba70  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  6c0bba70 <- [0xdead300c]  r1 = 6c0bba70 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  9b41bc91 <- [0xdead3000]  r2 = 9b41bc91 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = f74a06e1 
    8734  str     r2, [r3]            ;  [0xdead300c] <- f74a06e1  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  7550125c <- [0xdead3008]  r1 = 7550125c 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  b11fd073 <- [0xdead3004]  r2 = b11fd073 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 266fe2cf 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 266fe2cf  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  b11fd073 <- [0xdead3004]  r2 = b11fd073 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 8fe839d8 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 8fe839d8  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  8fe839d8 <- [0xdead3004]  r1 = 8fe839d8 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  266fe2cf <- [0xdead3008]  r2 = 266fe2cf 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = a987db17 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- a987db17  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  266fe2cf <- [0xdead3008]  r2 = 266fe2cf 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = e2cf266f 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- e2cf266f  
    87C0  ldr     r3, [fp, #-0xc]     ;         9 <- [0xaffffff0]  r3 = 00000009 
    87C4  add     r3, r3, #1          ; r3 = 0000000a 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- a  
    87CC  ldr     r3, [fp, #-0xc]     ;         a <- [0xaffffff0]  r3 = 0000000a 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  9b41bc91 <- [0xdead3000]  r2 = 9b41bc91 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  a987db17 <- [0xdead3004]  r3 = a987db17 
    860C  add     r2, r2, r3          ; r2 = 44c997a8 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 44c997a8  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  a987db17 <- [0xdead3004]  r2 = a987db17 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 30fb62f5 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 30fb62f5  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  30fb62f5 <- [0xdead3004]  r1 = 30fb62f5 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  44c997a8 <- [0xdead3000]  r2 = 44c997a8 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 7432f55d 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 7432f55d  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  44c997a8 <- [0xdead3000]  r3 = 44c997a8 
    8660  ror     r2, r3, #0x10       ; r2 = 97a844c9 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 97a844c9  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  e2cf266f <- [0xdead3008]  r1 = e2cf266f 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  f74a06e1 <- [0xdead300c]  r2 = f74a06e1 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = da192d50 
    8690  str     r2, [r3]            ;  [0xdead3008] <- da192d50  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  f74a06e1 <- [0xdead300c]  r2 = f74a06e1 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 4a06e1f7 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 4a06e1f7  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  4a06e1f7 <- [0xdead300c]  r1 = 4a06e1f7 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  da192d50 <- [0xdead3008]  r2 = da192d50 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 901fcca7 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 901fcca7  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  97a844c9 <- [0xdead3000]  r2 = 97a844c9 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  901fcca7 <- [0xdead300c]  r3 = 901fcca7 
    86EC  add     r2, r2, r3          ; r2 = 27c81170 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 27c81170  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  901fcca7 <- [0xdead300c]  r2 = 901fcca7 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = f994f203 
    8710  str     r2, [r3]            ;  [0xdead300c] <- f994f203  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  f994f203 <- [0xdead300c]  r1 = f994f203 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  27c81170 <- [0xdead3000]  r2 = 27c81170 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = de5ce373 
    8734  str     r2, [r3]            ;  [0xdead300c] <- de5ce373  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  da192d50 <- [0xdead3008]  r1 = da192d50 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  7432f55d <- [0xdead3004]  r2 = 7432f55d 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 4e4c22ad 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 4e4c22ad  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  7432f55d <- [0xdead3004]  r2 = 7432f55d 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 197aaeba 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 197aaeba  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  197aaeba <- [0xdead3004]  r1 = 197aaeba 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  4e4c22ad <- [0xdead3008]  r2 = 4e4c22ad 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 57368c17 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 57368c17  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  4e4c22ad <- [0xdead3008]  r2 = 4e4c22ad 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 22ad4e4c 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 22ad4e4c  
    87C0  ldr     r3, [fp, #-0xc]     ;         a <- [0xaffffff0]  r3 = 0000000a 
    87C4  add     r3, r3, #1          ; r3 = 0000000b 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- b  
    87CC  ldr     r3, [fp, #-0xc]     ;         b <- [0xaffffff0]  r3 = 0000000b 
    87D0  cmp     r3, #0xb            ; cpsr = 600001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  27c81170 <- [0xdead3000]  r2 = 27c81170 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  57368c17 <- [0xdead3004]  r3 = 57368c17 
    860C  add     r2, r2, r3          ; r2 = 7efe9d87 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 7efe9d87  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  57368c17 <- [0xdead3004]  r2 = 57368c17 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = e6d182ea 
    8630  str     r2, [r3]            ;  [0xdead3004] <- e6d182ea  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  e6d182ea <- [0xdead3004]  r1 = e6d182ea 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  7efe9d87 <- [0xdead3000]  r2 = 7efe9d87 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 982f1f6d 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 982f1f6d  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  7efe9d87 <- [0xdead3000]  r3 = 7efe9d87 
    8660  ror     r2, r3, #0x10       ; r2 = 9d877efe 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 9d877efe  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  22ad4e4c <- [0xdead3008]  r1 = 22ad4e4c 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  de5ce373 <- [0xdead300c]  r2 = de5ce373 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 010a31bf 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 10a31bf  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  de5ce373 <- [0xdead300c]  r2 = de5ce373 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 5ce373de 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 5ce373de  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  5ce373de <- [0xdead300c]  r1 = 5ce373de 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;   10a31bf <- [0xdead3008]  r2 = 010a31bf 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 5de94261 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 5de94261  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  9d877efe <- [0xdead3000]  r2 = 9d877efe 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  5de94261 <- [0xdead300c]  r3 = 5de94261 
    86EC  add     r2, r2, r3          ; r2 = fb70c15f 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- fb70c15f  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  5de94261 <- [0xdead300c]  r2 = 5de94261 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 284c2bbd 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 284c2bbd  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  284c2bbd <- [0xdead300c]  r1 = 284c2bbd 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  fb70c15f <- [0xdead3000]  r2 = fb70c15f 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = d33ceae2 
    8734  str     r2, [r3]            ;  [0xdead300c] <- d33ceae2  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;   10a31bf <- [0xdead3008]  r1 = 010a31bf 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  982f1f6d <- [0xdead3004]  r2 = 982f1f6d 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 9939512c 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 9939512c  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  982f1f6d <- [0xdead3004]  r2 = 982f1f6d 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 178fb6cc 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 178fb6cc  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  178fb6cc <- [0xdead3004]  r1 = 178fb6cc 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  9939512c <- [0xdead3008]  r2 = 9939512c 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 8eb6e7e0 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 8eb6e7e0  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  9939512c <- [0xdead3008]  r2 = 9939512c 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 512c9939 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 512c9939  
    87C0  ldr     r3, [fp, #-0xc]     ;         b <- [0xaffffff0]  r3 = 0000000b 
    87C4  add     r3, r3, #1          ; r3 = 0000000c 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- c  
    87CC  ldr     r3, [fp, #-0xc]     ;         c <- [0xaffffff0]  r3 = 0000000c 
    87D0  cmp     r3, #0xb            ; cpsr = 200001d3 
    87D4  ble     #0x85f8             ; pc = 000087d8 
    87D8  ldr     r3, [fp, #-8]       ;         0 <- [0xaffffff4]  r3 = 00000000 
    87DC  add     r3, r3, #4          ; r3 = 00000004 
    87E0  str     r3, [fp, #-8]       ;  [0xaffffff4] <- 4  
    87E4  ldr     r3, [fp, #-0x14]    ;        10 <- [0xafffffe8]  r3 = 00000010 
    87E8  sub     r3, r3, #4          ; r3 = 0000000c 
    87EC  ldr     r2, [fp, #-8]       ;         4 <- [0xaffffff4]  r2 = 00000004 
    87F0  cmp     r2, r3              ; cpsr = 800001d3 
    87F4  blt     #0x8528             ; pc = 00008528 
    8528  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    852C  ldr     r2, [r3]            ;  fb70c15f <- [0xdead3000]  r2 = fb70c15f 
    8530  ldr     r3, [fp, #-8]       ;         4 <- [0xaffffff4]  r3 = 00000004 
    8534  lsl     r3, r3, #2          ; r3 = 00000010 
    8538  ldr     r1, [fp, #-0x3c]    ;  dead2000 <- [0xafffffc0]  r1 = dead2000 
    853C  add     r3, r1, r3          ; r3 = dead2010 
    8540  ldr     r3, [r3]            ;         1 <- [0xdead2010]  r3 = 00000001 
    8544  eor     r2, r2, r3          ; r2 = fb70c15e 
    8548  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    854C  str     r2, [r3]            ;  [0xdead3000] <- fb70c15e  
    8550  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8554  add     r3, r3, #4          ; r3 = dead3004 
    8558  ldr     r1, [r3]            ;  8eb6e7e0 <- [0xdead3004]  r1 = 8eb6e7e0 
    855C  ldr     r3, [fp, #-8]       ;         4 <- [0xaffffff4]  r3 = 00000004 
    8560  add     r3, r3, #1          ; r3 = 00000005 
    8564  lsl     r3, r3, #2          ; r3 = 00000014 
    8568  ldr     r2, [fp, #-0x3c]    ;  dead2000 <- [0xafffffc0]  r2 = dead2000 
    856C  add     r3, r2, r3          ; r3 = dead2014 
    8570  ldr     r2, [r3]            ;         0 <- [0xdead2014]  r2 = 00000000 
    8574  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8578  add     r3, r3, #4          ; r3 = dead3004 
    857C  eor     r2, r2, r1          ; r2 = 8eb6e7e0 
    8580  str     r2, [r3]            ;  [0xdead3004] <- 8eb6e7e0  
    8584  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8588  add     r3, r3, #8          ; r3 = dead3008 
    858C  ldr     r1, [r3]            ;  512c9939 <- [0xdead3008]  r1 = 512c9939 
    8590  ldr     r3, [fp, #-8]       ;         4 <- [0xaffffff4]  r3 = 00000004 
    8594  add     r3, r3, #2          ; r3 = 00000006 
    8598  lsl     r3, r3, #2          ; r3 = 00000018 
    859C  ldr     r2, [fp, #-0x3c]    ;  dead2000 <- [0xafffffc0]  r2 = dead2000 
    85A0  add     r3, r2, r3          ; r3 = dead2018 
    85A4  ldr     r2, [r3]            ;         0 <- [0xdead2018]  r2 = 00000000 
    85A8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85AC  add     r3, r3, #8          ; r3 = dead3008 
    85B0  eor     r2, r2, r1          ; r2 = 512c9939 
    85B4  str     r2, [r3]            ;  [0xdead3008] <- 512c9939  
    85B8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85BC  add     r3, r3, #0xc        ; r3 = dead300c 
    85C0  ldr     r1, [r3]            ;  d33ceae2 <- [0xdead300c]  r1 = d33ceae2 
    85C4  ldr     r3, [fp, #-8]       ;         4 <- [0xaffffff4]  r3 = 00000004 
    85C8  add     r3, r3, #3          ; r3 = 00000007 
    85CC  lsl     r3, r3, #2          ; r3 = 0000001c 
    85D0  ldr     r2, [fp, #-0x3c]    ;  dead2000 <- [0xafffffc0]  r2 = dead2000 
    85D4  add     r3, r2, r3          ; r3 = dead201c 
    85D8  ldr     r2, [r3]            ;         0 <- [0xdead201c]  r2 = 00000000 
    85DC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85E0  add     r3, r3, #0xc        ; r3 = dead300c 
    85E4  eor     r2, r2, r1          ; r2 = d33ceae2 
    85E8  str     r2, [r3]            ;  [0xdead300c] <- d33ceae2  
    85EC  mov     r3, #0              ; r3 = 00000000 
    85F0  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 0  
    85F4  b       #0x87cc             ; pc = 000087cc 
    87CC  ldr     r3, [fp, #-0xc]     ;         0 <- [0xaffffff0]  r3 = 00000000 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  fb70c15e <- [0xdead3000]  r2 = fb70c15e 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  8eb6e7e0 <- [0xdead3004]  r3 = 8eb6e7e0 
    860C  add     r2, r2, r3          ; r2 = 8a27a93e 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 8a27a93e  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  8eb6e7e0 <- [0xdead3004]  r2 = 8eb6e7e0 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = d6dcfc11 
    8630  str     r2, [r3]            ;  [0xdead3004] <- d6dcfc11  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  d6dcfc11 <- [0xdead3004]  r1 = d6dcfc11 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  8a27a93e <- [0xdead3000]  r2 = 8a27a93e 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 5cfb552f 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 5cfb552f  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  8a27a93e <- [0xdead3000]  r3 = 8a27a93e 
    8660  ror     r2, r3, #0x10       ; r2 = a93e8a27 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- a93e8a27  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  512c9939 <- [0xdead3008]  r1 = 512c9939 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  d33ceae2 <- [0xdead300c]  r2 = d33ceae2 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 2469841b 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 2469841b  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  d33ceae2 <- [0xdead300c]  r2 = d33ceae2 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 3ceae2d3 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 3ceae2d3  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  3ceae2d3 <- [0xdead300c]  r1 = 3ceae2d3 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  2469841b <- [0xdead3008]  r2 = 2469841b 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 188366c8 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 188366c8  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  a93e8a27 <- [0xdead3000]  r2 = a93e8a27 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  188366c8 <- [0xdead300c]  r3 = 188366c8 
    86EC  add     r2, r2, r3          ; r2 = c1c1f0ef 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- c1c1f0ef  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  188366c8 <- [0xdead300c]  r2 = 188366c8 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 6cd90310 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 6cd90310  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  6cd90310 <- [0xdead300c]  r1 = 6cd90310 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  c1c1f0ef <- [0xdead3000]  r2 = c1c1f0ef 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = ad18f3ff 
    8734  str     r2, [r3]            ;  [0xdead300c] <- ad18f3ff  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  2469841b <- [0xdead3008]  r1 = 2469841b 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  5cfb552f <- [0xdead3004]  r2 = 5cfb552f 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 8164d94a 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 8164d94a  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  5cfb552f <- [0xdead3004]  r2 = 5cfb552f 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 7daa97ae 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 7daa97ae  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  7daa97ae <- [0xdead3004]  r1 = 7daa97ae 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  8164d94a <- [0xdead3008]  r2 = 8164d94a 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = fcce4ee4 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- fcce4ee4  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  8164d94a <- [0xdead3008]  r2 = 8164d94a 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = d94a8164 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- d94a8164  
    87C0  ldr     r3, [fp, #-0xc]     ;         0 <- [0xaffffff0]  r3 = 00000000 
    87C4  add     r3, r3, #1          ; r3 = 00000001 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 1  
    87CC  ldr     r3, [fp, #-0xc]     ;         1 <- [0xaffffff0]  r3 = 00000001 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  c1c1f0ef <- [0xdead3000]  r2 = c1c1f0ef 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  fcce4ee4 <- [0xdead3004]  r3 = fcce4ee4 
    860C  add     r2, r2, r3          ; r2 = be903fd3 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- be903fd3  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  fcce4ee4 <- [0xdead3004]  r2 = fcce4ee4 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 99c9dc9f 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 99c9dc9f  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  99c9dc9f <- [0xdead3004]  r1 = 99c9dc9f 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  be903fd3 <- [0xdead3000]  r2 = be903fd3 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 2759e34c 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 2759e34c  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  be903fd3 <- [0xdead3000]  r3 = be903fd3 
    8660  ror     r2, r3, #0x10       ; r2 = 3fd3be90 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 3fd3be90  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  d94a8164 <- [0xdead3008]  r1 = d94a8164 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  ad18f3ff <- [0xdead300c]  r2 = ad18f3ff 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 86637563 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 86637563  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  ad18f3ff <- [0xdead300c]  r2 = ad18f3ff 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 18f3ffad 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 18f3ffad  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  18f3ffad <- [0xdead300c]  r1 = 18f3ffad 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  86637563 <- [0xdead3008]  r2 = 86637563 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 9e908ace 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 9e908ace  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  3fd3be90 <- [0xdead3000]  r2 = 3fd3be90 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  9e908ace <- [0xdead300c]  r3 = 9e908ace 
    86EC  add     r2, r2, r3          ; r2 = de64495e 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- de64495e  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  9e908ace <- [0xdead300c]  r2 = 9e908ace 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 1159d3d2 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 1159d3d2  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  1159d3d2 <- [0xdead300c]  r1 = 1159d3d2 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  de64495e <- [0xdead3000]  r2 = de64495e 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = cf3d9a8c 
    8734  str     r2, [r3]            ;  [0xdead300c] <- cf3d9a8c  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  86637563 <- [0xdead3008]  r1 = 86637563 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  2759e34c <- [0xdead3004]  r2 = 2759e34c 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = adbd58af 
    875C  str     r2, [r3]            ;  [0xdead3008] <- adbd58af  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  2759e34c <- [0xdead3004]  r2 = 2759e34c 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = acf1a613 
    8778  str     r2, [r3]            ;  [0xdead3004] <- acf1a613  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  acf1a613 <- [0xdead3004]  r1 = acf1a613 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  adbd58af <- [0xdead3008]  r2 = adbd58af 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 014cfebc 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 14cfebc  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  adbd58af <- [0xdead3008]  r2 = adbd58af 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 58afadbd 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 58afadbd  
    87C0  ldr     r3, [fp, #-0xc]     ;         1 <- [0xaffffff0]  r3 = 00000001 
    87C4  add     r3, r3, #1          ; r3 = 00000002 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 2  
    87CC  ldr     r3, [fp, #-0xc]     ;         2 <- [0xaffffff0]  r3 = 00000002 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  de64495e <- [0xdead3000]  r2 = de64495e 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;   14cfebc <- [0xdead3004]  r3 = 014cfebc 
    860C  add     r2, r2, r3          ; r2 = dfb1481a 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- dfb1481a  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;   14cfebc <- [0xdead3004]  r2 = 014cfebc 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 299fd780 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 299fd780  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  299fd780 <- [0xdead3004]  r1 = 299fd780 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  dfb1481a <- [0xdead3000]  r2 = dfb1481a 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = f62e9f9a 
    8654  str     r2, [r3]            ;  [0xdead3004] <- f62e9f9a  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  dfb1481a <- [0xdead3000]  r3 = dfb1481a 
    8660  ror     r2, r3, #0x10       ; r2 = 481adfb1 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 481adfb1  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  58afadbd <- [0xdead3008]  r1 = 58afadbd 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  cf3d9a8c <- [0xdead300c]  r2 = cf3d9a8c 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 27ed4849 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 27ed4849  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  cf3d9a8c <- [0xdead300c]  r2 = cf3d9a8c 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 3d9a8ccf 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 3d9a8ccf  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  3d9a8ccf <- [0xdead300c]  r1 = 3d9a8ccf 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  27ed4849 <- [0xdead3008]  r2 = 27ed4849 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 1a77c486 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 1a77c486  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  481adfb1 <- [0xdead3000]  r2 = 481adfb1 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  1a77c486 <- [0xdead300c]  r3 = 1a77c486 
    86EC  add     r2, r2, r3          ; r2 = 6292a437 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 6292a437  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  1a77c486 <- [0xdead300c]  r2 = 1a77c486 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = f890c34e 
    8710  str     r2, [r3]            ;  [0xdead300c] <- f890c34e  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  f890c34e <- [0xdead300c]  r1 = f890c34e 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  6292a437 <- [0xdead3000]  r2 = 6292a437 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 9a026779 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 9a026779  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  27ed4849 <- [0xdead3008]  r1 = 27ed4849 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  f62e9f9a <- [0xdead3004]  r2 = f62e9f9a 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 1e1be7e3 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 1e1be7e3  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  f62e9f9a <- [0xdead3004]  r2 = f62e9f9a 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 174fcd7b 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 174fcd7b  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  174fcd7b <- [0xdead3004]  r1 = 174fcd7b 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  1e1be7e3 <- [0xdead3008]  r2 = 1e1be7e3 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 09542a98 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 9542a98  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  1e1be7e3 <- [0xdead3008]  r2 = 1e1be7e3 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = e7e31e1b 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- e7e31e1b  
    87C0  ldr     r3, [fp, #-0xc]     ;         2 <- [0xaffffff0]  r3 = 00000002 
    87C4  add     r3, r3, #1          ; r3 = 00000003 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 3  
    87CC  ldr     r3, [fp, #-0xc]     ;         3 <- [0xaffffff0]  r3 = 00000003 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  6292a437 <- [0xdead3000]  r2 = 6292a437 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;   9542a98 <- [0xdead3004]  r3 = 09542a98 
    860C  add     r2, r2, r3          ; r2 = 6be6cecf 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 6be6cecf  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;   9542a98 <- [0xdead3004]  r2 = 09542a98 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 2a855301 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 2a855301  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  2a855301 <- [0xdead3004]  r1 = 2a855301 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  6be6cecf <- [0xdead3000]  r2 = 6be6cecf 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 41639dce 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 41639dce  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  6be6cecf <- [0xdead3000]  r3 = 6be6cecf 
    8660  ror     r2, r3, #0x10       ; r2 = cecf6be6 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- cecf6be6  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  e7e31e1b <- [0xdead3008]  r1 = e7e31e1b 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  9a026779 <- [0xdead300c]  r2 = 9a026779 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 81e58594 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 81e58594  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  9a026779 <- [0xdead300c]  r2 = 9a026779 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 0267799a 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 267799a  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;   267799a <- [0xdead300c]  r1 = 0267799a 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  81e58594 <- [0xdead3008]  r2 = 81e58594 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 8382fc0e 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 8382fc0e  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  cecf6be6 <- [0xdead3000]  r2 = cecf6be6 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  8382fc0e <- [0xdead300c]  r3 = 8382fc0e 
    86EC  add     r2, r2, r3          ; r2 = 525267f4 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 525267f4  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  8382fc0e <- [0xdead300c]  r2 = 8382fc0e 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 5f81d070 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 5f81d070  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  5f81d070 <- [0xdead300c]  r1 = 5f81d070 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  525267f4 <- [0xdead3000]  r2 = 525267f4 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 0dd3b784 
    8734  str     r2, [r3]            ;  [0xdead300c] <- dd3b784  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  81e58594 <- [0xdead3008]  r1 = 81e58594 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  41639dce <- [0xdead3004]  r2 = 41639dce 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = c3492362 
    875C  str     r2, [r3]            ;  [0xdead3008] <- c3492362  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  41639dce <- [0xdead3004]  r2 = 41639dce 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = b1cee720 
    8778  str     r2, [r3]            ;  [0xdead3004] <- b1cee720  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  b1cee720 <- [0xdead3004]  r1 = b1cee720 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  c3492362 <- [0xdead3008]  r2 = c3492362 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 7287c442 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 7287c442  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  c3492362 <- [0xdead3008]  r2 = c3492362 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 2362c349 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 2362c349  
    87C0  ldr     r3, [fp, #-0xc]     ;         3 <- [0xaffffff0]  r3 = 00000003 
    87C4  add     r3, r3, #1          ; r3 = 00000004 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 4  
    87CC  ldr     r3, [fp, #-0xc]     ;         4 <- [0xaffffff0]  r3 = 00000004 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  525267f4 <- [0xdead3000]  r2 = 525267f4 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  7287c442 <- [0xdead3004]  r3 = 7287c442 
    860C  add     r2, r2, r3          ; r2 = c4da2c36 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- c4da2c36  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  7287c442 <- [0xdead3004]  r2 = 7287c442 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 50f8884e 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 50f8884e  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  50f8884e <- [0xdead3004]  r1 = 50f8884e 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  c4da2c36 <- [0xdead3000]  r2 = c4da2c36 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 9422a478 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 9422a478  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  c4da2c36 <- [0xdead3000]  r3 = c4da2c36 
    8660  ror     r2, r3, #0x10       ; r2 = 2c36c4da 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 2c36c4da  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  2362c349 <- [0xdead3008]  r1 = 2362c349 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;   dd3b784 <- [0xdead300c]  r2 = 0dd3b784 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 31367acd 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 31367acd  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;   dd3b784 <- [0xdead300c]  r2 = 0dd3b784 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = d3b7840d 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- d3b7840d  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  d3b7840d <- [0xdead300c]  r1 = d3b7840d 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  31367acd <- [0xdead3008]  r2 = 31367acd 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = e281fec0 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- e281fec0  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  2c36c4da <- [0xdead3000]  r2 = 2c36c4da 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  e281fec0 <- [0xdead300c]  r3 = e281fec0 
    86EC  add     r2, r2, r3          ; r2 = 0eb8c39a 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- eb8c39a  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  e281fec0 <- [0xdead300c]  r2 = e281fec0 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 3fd81c50 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 3fd81c50  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  3fd81c50 <- [0xdead300c]  r1 = 3fd81c50 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;   eb8c39a <- [0xdead3000]  r2 = 0eb8c39a 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 3160dfca 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 3160dfca  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  31367acd <- [0xdead3008]  r1 = 31367acd 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  9422a478 <- [0xdead3004]  r2 = 9422a478 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = c5591f45 
    875C  str     r2, [r3]            ;  [0xdead3008] <- c5591f45  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  9422a478 <- [0xdead3004]  r2 = 9422a478 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 11523c4a 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 11523c4a  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  11523c4a <- [0xdead3004]  r1 = 11523c4a 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  c5591f45 <- [0xdead3008]  r2 = c5591f45 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = d40b230f 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- d40b230f  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  c5591f45 <- [0xdead3008]  r2 = c5591f45 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 1f45c559 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 1f45c559  
    87C0  ldr     r3, [fp, #-0xc]     ;         4 <- [0xaffffff0]  r3 = 00000004 
    87C4  add     r3, r3, #1          ; r3 = 00000005 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 5  
    87CC  ldr     r3, [fp, #-0xc]     ;         5 <- [0xaffffff0]  r3 = 00000005 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;   eb8c39a <- [0xdead3000]  r2 = 0eb8c39a 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  d40b230f <- [0xdead3004]  r3 = d40b230f 
    860C  add     r2, r2, r3          ; r2 = e2c3e6a9 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- e2c3e6a9  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  d40b230f <- [0xdead3004]  r2 = d40b230f 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 816461fa 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 816461fa  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  816461fa <- [0xdead3004]  r1 = 816461fa 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  e2c3e6a9 <- [0xdead3000]  r2 = e2c3e6a9 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 63a78753 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 63a78753  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  e2c3e6a9 <- [0xdead3000]  r3 = e2c3e6a9 
    8660  ror     r2, r3, #0x10       ; r2 = e6a9e2c3 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- e6a9e2c3  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  1f45c559 <- [0xdead3008]  r1 = 1f45c559 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  3160dfca <- [0xdead300c]  r2 = 3160dfca 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 50a6a523 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 50a6a523  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  3160dfca <- [0xdead300c]  r2 = 3160dfca 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 60dfca31 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 60dfca31  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  60dfca31 <- [0xdead300c]  r1 = 60dfca31 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  50a6a523 <- [0xdead3008]  r2 = 50a6a523 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 30796f12 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 30796f12  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  e6a9e2c3 <- [0xdead3000]  r2 = e6a9e2c3 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  30796f12 <- [0xdead300c]  r3 = 30796f12 
    86EC  add     r2, r2, r3          ; r2 = 172351d5 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 172351d5  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  30796f12 <- [0xdead300c]  r2 = 30796f12 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 2de2460f 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 2de2460f  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  2de2460f <- [0xdead300c]  r1 = 2de2460f 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  172351d5 <- [0xdead3000]  r2 = 172351d5 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 3ac117da 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 3ac117da  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  50a6a523 <- [0xdead3008]  r1 = 50a6a523 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  63a78753 <- [0xdead3004]  r2 = 63a78753 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = b44e2c76 
    875C  str     r2, [r3]            ;  [0xdead3008] <- b44e2c76  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  63a78753 <- [0xdead3004]  r2 = 63a78753 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = d3c3a9b1 
    8778  str     r2, [r3]            ;  [0xdead3004] <- d3c3a9b1  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  d3c3a9b1 <- [0xdead3004]  r1 = d3c3a9b1 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  b44e2c76 <- [0xdead3008]  r2 = b44e2c76 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 678d85c7 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 678d85c7  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  b44e2c76 <- [0xdead3008]  r2 = b44e2c76 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 2c76b44e 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 2c76b44e  
    87C0  ldr     r3, [fp, #-0xc]     ;         5 <- [0xaffffff0]  r3 = 00000005 
    87C4  add     r3, r3, #1          ; r3 = 00000006 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 6  
    87CC  ldr     r3, [fp, #-0xc]     ;         6 <- [0xaffffff0]  r3 = 00000006 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  172351d5 <- [0xdead3000]  r2 = 172351d5 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  678d85c7 <- [0xdead3004]  r3 = 678d85c7 
    860C  add     r2, r2, r3          ; r2 = 7eb0d79c 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 7eb0d79c  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  678d85c7 <- [0xdead3004]  r2 = 678d85c7 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = f1b0b8ec 
    8630  str     r2, [r3]            ;  [0xdead3004] <- f1b0b8ec  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  f1b0b8ec <- [0xdead3004]  r1 = f1b0b8ec 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  7eb0d79c <- [0xdead3000]  r2 = 7eb0d79c 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 8f006f70 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 8f006f70  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  7eb0d79c <- [0xdead3000]  r3 = 7eb0d79c 
    8660  ror     r2, r3, #0x10       ; r2 = d79c7eb0 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- d79c7eb0  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  2c76b44e <- [0xdead3008]  r1 = 2c76b44e 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  3ac117da <- [0xdead300c]  r2 = 3ac117da 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 6737cc28 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 6737cc28  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  3ac117da <- [0xdead300c]  r2 = 3ac117da 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = c117da3a 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- c117da3a  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  c117da3a <- [0xdead300c]  r1 = c117da3a 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  6737cc28 <- [0xdead3008]  r2 = 6737cc28 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = a6201612 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- a6201612  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  d79c7eb0 <- [0xdead3000]  r2 = d79c7eb0 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  a6201612 <- [0xdead300c]  r3 = a6201612 
    86EC  add     r2, r2, r3          ; r2 = 7dbc94c2 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 7dbc94c2  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  a6201612 <- [0xdead300c]  r2 = a6201612 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 02c254c4 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 2c254c4  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;   2c254c4 <- [0xdead300c]  r1 = 02c254c4 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  7dbc94c2 <- [0xdead3000]  r2 = 7dbc94c2 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 7f7ec006 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 7f7ec006  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  6737cc28 <- [0xdead3008]  r1 = 6737cc28 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  8f006f70 <- [0xdead3004]  r2 = 8f006f70 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = f6383b98 
    875C  str     r2, [r3]            ;  [0xdead3008] <- f6383b98  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  8f006f70 <- [0xdead3004]  r2 = 8f006f70 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 8037b847 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 8037b847  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  8037b847 <- [0xdead3004]  r1 = 8037b847 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  f6383b98 <- [0xdead3008]  r2 = f6383b98 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 760f83df 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 760f83df  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  f6383b98 <- [0xdead3008]  r2 = f6383b98 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 3b98f638 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 3b98f638  
    87C0  ldr     r3, [fp, #-0xc]     ;         6 <- [0xaffffff0]  r3 = 00000006 
    87C4  add     r3, r3, #1          ; r3 = 00000007 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 7  
    87CC  ldr     r3, [fp, #-0xc]     ;         7 <- [0xaffffff0]  r3 = 00000007 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  7dbc94c2 <- [0xdead3000]  r2 = 7dbc94c2 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  760f83df <- [0xdead3004]  r3 = 760f83df 
    860C  add     r2, r2, r3          ; r2 = f3cc18a1 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- f3cc18a1  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  760f83df <- [0xdead3004]  r2 = 760f83df 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = c1f07bee 
    8630  str     r2, [r3]            ;  [0xdead3004] <- c1f07bee  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  c1f07bee <- [0xdead3004]  r1 = c1f07bee 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  f3cc18a1 <- [0xdead3000]  r2 = f3cc18a1 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 323c634f 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 323c634f  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  f3cc18a1 <- [0xdead3000]  r3 = f3cc18a1 
    8660  ror     r2, r3, #0x10       ; r2 = 18a1f3cc 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 18a1f3cc  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  3b98f638 <- [0xdead3008]  r1 = 3b98f638 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  7f7ec006 <- [0xdead300c]  r2 = 7f7ec006 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = bb17b63e 
    8690  str     r2, [r3]            ;  [0xdead3008] <- bb17b63e  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  7f7ec006 <- [0xdead300c]  r2 = 7f7ec006 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 7ec0067f 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 7ec0067f  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  7ec0067f <- [0xdead300c]  r1 = 7ec0067f 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  bb17b63e <- [0xdead3008]  r2 = bb17b63e 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = c5d7b041 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- c5d7b041  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  18a1f3cc <- [0xdead3000]  r2 = 18a1f3cc 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  c5d7b041 <- [0xdead300c]  r3 = c5d7b041 
    86EC  add     r2, r2, r3          ; r2 = de79a40d 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- de79a40d  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  c5d7b041 <- [0xdead300c]  r2 = c5d7b041 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = f60838ba 
    8710  str     r2, [r3]            ;  [0xdead300c] <- f60838ba  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  f60838ba <- [0xdead300c]  r1 = f60838ba 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  de79a40d <- [0xdead3000]  r2 = de79a40d 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 28719cb7 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 28719cb7  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  bb17b63e <- [0xdead3008]  r1 = bb17b63e 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  323c634f <- [0xdead3004]  r2 = 323c634f 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = ed54198d 
    875C  str     r2, [r3]            ;  [0xdead3008] <- ed54198d  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  323c634f <- [0xdead3004]  r2 = 323c634f 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 1e31a799 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 1e31a799  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  1e31a799 <- [0xdead3004]  r1 = 1e31a799 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  ed54198d <- [0xdead3008]  r2 = ed54198d 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = f365be14 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- f365be14  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  ed54198d <- [0xdead3008]  r2 = ed54198d 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 198ded54 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 198ded54  
    87C0  ldr     r3, [fp, #-0xc]     ;         7 <- [0xaffffff0]  r3 = 00000007 
    87C4  add     r3, r3, #1          ; r3 = 00000008 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 8  
    87CC  ldr     r3, [fp, #-0xc]     ;         8 <- [0xaffffff0]  r3 = 00000008 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  de79a40d <- [0xdead3000]  r2 = de79a40d 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  f365be14 <- [0xdead3004]  r3 = f365be14 
    860C  add     r2, r2, r3          ; r2 = d1df6221 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- d1df6221  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  f365be14 <- [0xdead3004]  r2 = f365be14 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 6cb7c29e 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 6cb7c29e  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  6cb7c29e <- [0xdead3004]  r1 = 6cb7c29e 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  d1df6221 <- [0xdead3000]  r2 = d1df6221 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = bd68a0bf 
    8654  str     r2, [r3]            ;  [0xdead3004] <- bd68a0bf  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  d1df6221 <- [0xdead3000]  r3 = d1df6221 
    8660  ror     r2, r3, #0x10       ; r2 = 6221d1df 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 6221d1df  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  198ded54 <- [0xdead3008]  r1 = 198ded54 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  28719cb7 <- [0xdead300c]  r2 = 28719cb7 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 41ff8a0b 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 41ff8a0b  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  28719cb7 <- [0xdead300c]  r2 = 28719cb7 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 719cb728 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 719cb728  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  719cb728 <- [0xdead300c]  r1 = 719cb728 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  41ff8a0b <- [0xdead3008]  r2 = 41ff8a0b 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 30633d23 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 30633d23  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  6221d1df <- [0xdead3000]  r2 = 6221d1df 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  30633d23 <- [0xdead300c]  r3 = 30633d23 
    86EC  add     r2, r2, r3          ; r2 = 92850f02 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 92850f02  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  30633d23 <- [0xdead300c]  r2 = 30633d23 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 67a4660c 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 67a4660c  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  67a4660c <- [0xdead300c]  r1 = 67a4660c 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  92850f02 <- [0xdead3000]  r2 = 92850f02 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = f521690e 
    8734  str     r2, [r3]            ;  [0xdead300c] <- f521690e  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  41ff8a0b <- [0xdead3008]  r1 = 41ff8a0b 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  bd68a0bf <- [0xdead3004]  r2 = bd68a0bf 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = ff682aca 
    875C  str     r2, [r3]            ;  [0xdead3008] <- ff682aca  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  bd68a0bf <- [0xdead3004]  r2 = bd68a0bf 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = b4505fde 
    8778  str     r2, [r3]            ;  [0xdead3004] <- b4505fde  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  b4505fde <- [0xdead3004]  r1 = b4505fde 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  ff682aca <- [0xdead3008]  r2 = ff682aca 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 4b387514 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 4b387514  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  ff682aca <- [0xdead3008]  r2 = ff682aca 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 2acaff68 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 2acaff68  
    87C0  ldr     r3, [fp, #-0xc]     ;         8 <- [0xaffffff0]  r3 = 00000008 
    87C4  add     r3, r3, #1          ; r3 = 00000009 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 9  
    87CC  ldr     r3, [fp, #-0xc]     ;         9 <- [0xaffffff0]  r3 = 00000009 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  92850f02 <- [0xdead3000]  r2 = 92850f02 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  4b387514 <- [0xdead3004]  r3 = 4b387514 
    860C  add     r2, r2, r3          ; r2 = ddbd8416 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- ddbd8416  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  4b387514 <- [0xdead3004]  r2 = 4b387514 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 670ea289 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 670ea289  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  670ea289 <- [0xdead3004]  r1 = 670ea289 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  ddbd8416 <- [0xdead3000]  r2 = ddbd8416 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = bab3269f 
    8654  str     r2, [r3]            ;  [0xdead3004] <- bab3269f  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  ddbd8416 <- [0xdead3000]  r3 = ddbd8416 
    8660  ror     r2, r3, #0x10       ; r2 = 8416ddbd 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 8416ddbd  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  2acaff68 <- [0xdead3008]  r1 = 2acaff68 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  f521690e <- [0xdead300c]  r2 = f521690e 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 1fec6876 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 1fec6876  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  f521690e <- [0xdead300c]  r2 = f521690e 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 21690ef5 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 21690ef5  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  21690ef5 <- [0xdead300c]  r1 = 21690ef5 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  1fec6876 <- [0xdead3008]  r2 = 1fec6876 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 3e856683 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 3e856683  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  8416ddbd <- [0xdead3000]  r2 = 8416ddbd 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  3e856683 <- [0xdead300c]  r3 = 3e856683 
    86EC  add     r2, r2, r3          ; r2 = c29c4440 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- c29c4440  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  3e856683 <- [0xdead300c]  r2 = 3e856683 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = acd067d0 
    8710  str     r2, [r3]            ;  [0xdead300c] <- acd067d0  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  acd067d0 <- [0xdead300c]  r1 = acd067d0 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  c29c4440 <- [0xdead3000]  r2 = c29c4440 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 6e4c2390 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 6e4c2390  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  1fec6876 <- [0xdead3008]  r1 = 1fec6876 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  bab3269f <- [0xdead3004]  r2 = bab3269f 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = da9f8f15 
    875C  str     r2, [r3]            ;  [0xdead3008] <- da9f8f15  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  bab3269f <- [0xdead3004]  r2 = bab3269f 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 59934fdd 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 59934fdd  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  59934fdd <- [0xdead3004]  r1 = 59934fdd 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  da9f8f15 <- [0xdead3008]  r2 = da9f8f15 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 830cc0c8 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 830cc0c8  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  da9f8f15 <- [0xdead3008]  r2 = da9f8f15 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 8f15da9f 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 8f15da9f  
    87C0  ldr     r3, [fp, #-0xc]     ;         9 <- [0xaffffff0]  r3 = 00000009 
    87C4  add     r3, r3, #1          ; r3 = 0000000a 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- a  
    87CC  ldr     r3, [fp, #-0xc]     ;         a <- [0xaffffff0]  r3 = 0000000a 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  c29c4440 <- [0xdead3000]  r2 = c29c4440 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  830cc0c8 <- [0xdead3004]  r3 = 830cc0c8 
    860C  add     r2, r2, r3          ; r2 = 45a90508 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 45a90508  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  830cc0c8 <- [0xdead3004]  r2 = 830cc0c8 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 61981910 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 61981910  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  61981910 <- [0xdead3004]  r1 = 61981910 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  45a90508 <- [0xdead3000]  r2 = 45a90508 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 24311c18 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 24311c18  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  45a90508 <- [0xdead3000]  r3 = 45a90508 
    8660  ror     r2, r3, #0x10       ; r2 = 050845a9 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 50845a9  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  8f15da9f <- [0xdead3008]  r1 = 8f15da9f 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  6e4c2390 <- [0xdead300c]  r2 = 6e4c2390 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = fd61fe2f 
    8690  str     r2, [r3]            ;  [0xdead3008] <- fd61fe2f  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  6e4c2390 <- [0xdead300c]  r2 = 6e4c2390 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 4c23906e 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 4c23906e  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  4c23906e <- [0xdead300c]  r1 = 4c23906e 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  fd61fe2f <- [0xdead3008]  r2 = fd61fe2f 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = b1426e41 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- b1426e41  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;   50845a9 <- [0xdead3000]  r2 = 050845a9 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  b1426e41 <- [0xdead300c]  r3 = b1426e41 
    86EC  add     r2, r2, r3          ; r2 = b64ab3ea 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- b64ab3ea  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  b1426e41 <- [0xdead300c]  r2 = b1426e41 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 4dc83628 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 4dc83628  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  4dc83628 <- [0xdead300c]  r1 = 4dc83628 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  b64ab3ea <- [0xdead3000]  r2 = b64ab3ea 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = fb8285c2 
    8734  str     r2, [r3]            ;  [0xdead300c] <- fb8285c2  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  fd61fe2f <- [0xdead3008]  r1 = fd61fe2f 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  24311c18 <- [0xdead3004]  r2 = 24311c18 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 21931a47 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 21931a47  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  24311c18 <- [0xdead3004]  r2 = 24311c18 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 188e0c12 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 188e0c12  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  188e0c12 <- [0xdead3004]  r1 = 188e0c12 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  21931a47 <- [0xdead3008]  r2 = 21931a47 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 391d1655 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 391d1655  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  21931a47 <- [0xdead3008]  r2 = 21931a47 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 1a472193 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 1a472193  
    87C0  ldr     r3, [fp, #-0xc]     ;         a <- [0xaffffff0]  r3 = 0000000a 
    87C4  add     r3, r3, #1          ; r3 = 0000000b 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- b  
    87CC  ldr     r3, [fp, #-0xc]     ;         b <- [0xaffffff0]  r3 = 0000000b 
    87D0  cmp     r3, #0xb            ; cpsr = 600001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  b64ab3ea <- [0xdead3000]  r2 = b64ab3ea 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  391d1655 <- [0xdead3004]  r3 = 391d1655 
    860C  add     r2, r2, r3          ; r2 = ef67ca3f 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- ef67ca3f  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  391d1655 <- [0xdead3004]  r2 = 391d1655 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 23a2caa7 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 23a2caa7  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  23a2caa7 <- [0xdead3004]  r1 = 23a2caa7 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  ef67ca3f <- [0xdead3000]  r2 = ef67ca3f 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = ccc50098 
    8654  str     r2, [r3]            ;  [0xdead3004] <- ccc50098  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  ef67ca3f <- [0xdead3000]  r3 = ef67ca3f 
    8660  ror     r2, r3, #0x10       ; r2 = ca3fef67 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- ca3fef67  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  1a472193 <- [0xdead3008]  r1 = 1a472193 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  fb8285c2 <- [0xdead300c]  r2 = fb8285c2 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 15c9a755 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 15c9a755  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  fb8285c2 <- [0xdead300c]  r2 = fb8285c2 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 8285c2fb 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 8285c2fb  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  8285c2fb <- [0xdead300c]  r1 = 8285c2fb 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  15c9a755 <- [0xdead3008]  r2 = 15c9a755 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 974c65ae 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 974c65ae  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  ca3fef67 <- [0xdead3000]  r2 = ca3fef67 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  974c65ae <- [0xdead300c]  r3 = 974c65ae 
    86EC  add     r2, r2, r3          ; r2 = 618c5515 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 618c5515  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  974c65ae <- [0xdead300c]  r2 = 974c65ae 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 8cb5d2e9 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 8cb5d2e9  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  8cb5d2e9 <- [0xdead300c]  r1 = 8cb5d2e9 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  618c5515 <- [0xdead3000]  r2 = 618c5515 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = ed3987fc 
    8734  str     r2, [r3]            ;  [0xdead300c] <- ed3987fc  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  15c9a755 <- [0xdead3008]  r1 = 15c9a755 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  ccc50098 <- [0xdead3004]  r2 = ccc50098 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = e28ea7ed 
    875C  str     r2, [r3]            ;  [0xdead3008] <- e28ea7ed  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  ccc50098 <- [0xdead3004]  r2 = ccc50098 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 62804c66 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 62804c66  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  62804c66 <- [0xdead3004]  r1 = 62804c66 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  e28ea7ed <- [0xdead3008]  r2 = e28ea7ed 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 800eeb8b 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 800eeb8b  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  e28ea7ed <- [0xdead3008]  r2 = e28ea7ed 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = a7ede28e 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- a7ede28e  
    87C0  ldr     r3, [fp, #-0xc]     ;         b <- [0xaffffff0]  r3 = 0000000b 
    87C4  add     r3, r3, #1          ; r3 = 0000000c 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- c  
    87CC  ldr     r3, [fp, #-0xc]     ;         c <- [0xaffffff0]  r3 = 0000000c 
    87D0  cmp     r3, #0xb            ; cpsr = 200001d3 
    87D4  ble     #0x85f8             ; pc = 000087d8 
    87D8  ldr     r3, [fp, #-8]       ;         4 <- [0xaffffff4]  r3 = 00000004 
    87DC  add     r3, r3, #4          ; r3 = 00000008 
    87E0  str     r3, [fp, #-8]       ;  [0xaffffff4] <- 8  
    87E4  ldr     r3, [fp, #-0x14]    ;        10 <- [0xafffffe8]  r3 = 00000010 
    87E8  sub     r3, r3, #4          ; r3 = 0000000c 
    87EC  ldr     r2, [fp, #-8]       ;         8 <- [0xaffffff4]  r2 = 00000008 
    87F0  cmp     r2, r3              ; cpsr = 800001d3 
    87F4  blt     #0x8528             ; pc = 00008528 
    8528  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    852C  ldr     r2, [r3]            ;  618c5515 <- [0xdead3000]  r2 = 618c5515 
    8530  ldr     r3, [fp, #-8]       ;         8 <- [0xaffffff4]  r3 = 00000008 
    8534  lsl     r3, r3, #2          ; r3 = 00000020 
    8538  ldr     r1, [fp, #-0x3c]    ;  dead2000 <- [0xafffffc0]  r1 = dead2000 
    853C  add     r3, r1, r3          ; r3 = dead2020 
    8540  ldr     r3, [r3]            ;         1 <- [0xdead2020]  r3 = 00000001 
    8544  eor     r2, r2, r3          ; r2 = 618c5514 
    8548  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    854C  str     r2, [r3]            ;  [0xdead3000] <- 618c5514  
    8550  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8554  add     r3, r3, #4          ; r3 = dead3004 
    8558  ldr     r1, [r3]            ;  800eeb8b <- [0xdead3004]  r1 = 800eeb8b 
    855C  ldr     r3, [fp, #-8]       ;         8 <- [0xaffffff4]  r3 = 00000008 
    8560  add     r3, r3, #1          ; r3 = 00000009 
    8564  lsl     r3, r3, #2          ; r3 = 00000024 
    8568  ldr     r2, [fp, #-0x3c]    ;  dead2000 <- [0xafffffc0]  r2 = dead2000 
    856C  add     r3, r2, r3          ; r3 = dead2024 
    8570  ldr     r2, [r3]            ;         0 <- [0xdead2024]  r2 = 00000000 
    8574  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8578  add     r3, r3, #4          ; r3 = dead3004 
    857C  eor     r2, r2, r1          ; r2 = 800eeb8b 
    8580  str     r2, [r3]            ;  [0xdead3004] <- 800eeb8b  
    8584  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8588  add     r3, r3, #8          ; r3 = dead3008 
    858C  ldr     r1, [r3]            ;  a7ede28e <- [0xdead3008]  r1 = a7ede28e 
    8590  ldr     r3, [fp, #-8]       ;         8 <- [0xaffffff4]  r3 = 00000008 
    8594  add     r3, r3, #2          ; r3 = 0000000a 
    8598  lsl     r3, r3, #2          ; r3 = 00000028 
    859C  ldr     r2, [fp, #-0x3c]    ;  dead2000 <- [0xafffffc0]  r2 = dead2000 
    85A0  add     r3, r2, r3          ; r3 = dead2028 
    85A4  ldr     r2, [r3]            ;         0 <- [0xdead2028]  r2 = 00000000 
    85A8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85AC  add     r3, r3, #8          ; r3 = dead3008 
    85B0  eor     r2, r2, r1          ; r2 = a7ede28e 
    85B4  str     r2, [r3]            ;  [0xdead3008] <- a7ede28e  
    85B8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85BC  add     r3, r3, #0xc        ; r3 = dead300c 
    85C0  ldr     r1, [r3]            ;  ed3987fc <- [0xdead300c]  r1 = ed3987fc 
    85C4  ldr     r3, [fp, #-8]       ;         8 <- [0xaffffff4]  r3 = 00000008 
    85C8  add     r3, r3, #3          ; r3 = 0000000b 
    85CC  lsl     r3, r3, #2          ; r3 = 0000002c 
    85D0  ldr     r2, [fp, #-0x3c]    ;  dead2000 <- [0xafffffc0]  r2 = dead2000 
    85D4  add     r3, r2, r3          ; r3 = dead202c 
    85D8  ldr     r2, [r3]            ;         0 <- [0xdead202c]  r2 = 00000000 
    85DC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85E0  add     r3, r3, #0xc        ; r3 = dead300c 
    85E4  eor     r2, r2, r1          ; r2 = ed3987fc 
    85E8  str     r2, [r3]            ;  [0xdead300c] <- ed3987fc  
    85EC  mov     r3, #0              ; r3 = 00000000 
    85F0  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 0  
    85F4  b       #0x87cc             ; pc = 000087cc 
    87CC  ldr     r3, [fp, #-0xc]     ;         0 <- [0xaffffff0]  r3 = 00000000 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  618c5514 <- [0xdead3000]  r2 = 618c5514 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  800eeb8b <- [0xdead3004]  r3 = 800eeb8b 
    860C  add     r2, r2, r3          ; r2 = e19b409f 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- e19b409f  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  800eeb8b <- [0xdead3004]  r2 = 800eeb8b 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 01dd7170 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 1dd7170  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;   1dd7170 <- [0xdead3004]  r1 = 01dd7170 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  e19b409f <- [0xdead3000]  r2 = e19b409f 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = e04631ef 
    8654  str     r2, [r3]            ;  [0xdead3004] <- e04631ef  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  e19b409f <- [0xdead3000]  r3 = e19b409f 
    8660  ror     r2, r3, #0x10       ; r2 = 409fe19b 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 409fe19b  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  a7ede28e <- [0xdead3008]  r1 = a7ede28e 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  ed3987fc <- [0xdead300c]  r2 = ed3987fc 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 95276a8a 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 95276a8a  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  ed3987fc <- [0xdead300c]  r2 = ed3987fc 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 3987fced 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 3987fced  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  3987fced <- [0xdead300c]  r1 = 3987fced 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  95276a8a <- [0xdead3008]  r2 = 95276a8a 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = aca09667 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- aca09667  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  409fe19b <- [0xdead3000]  r2 = 409fe19b 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  aca09667 <- [0xdead300c]  r3 = aca09667 
    86EC  add     r2, r2, r3          ; r2 = ed407802 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- ed407802  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  aca09667 <- [0xdead300c]  r2 = aca09667 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 12ccf594 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 12ccf594  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  12ccf594 <- [0xdead300c]  r1 = 12ccf594 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  ed407802 <- [0xdead3000]  r2 = ed407802 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = ff8c8d96 
    8734  str     r2, [r3]            ;  [0xdead300c] <- ff8c8d96  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  95276a8a <- [0xdead3008]  r1 = 95276a8a 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  e04631ef <- [0xdead3004]  r2 = e04631ef 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 756d9c79 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 756d9c79  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  e04631ef <- [0xdead3004]  r2 = e04631ef 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 2318f7f0 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 2318f7f0  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  2318f7f0 <- [0xdead3004]  r1 = 2318f7f0 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  756d9c79 <- [0xdead3008]  r2 = 756d9c79 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 56756b89 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 56756b89  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  756d9c79 <- [0xdead3008]  r2 = 756d9c79 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 9c79756d 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 9c79756d  
    87C0  ldr     r3, [fp, #-0xc]     ;         0 <- [0xaffffff0]  r3 = 00000000 
    87C4  add     r3, r3, #1          ; r3 = 00000001 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 1  
    87CC  ldr     r3, [fp, #-0xc]     ;         1 <- [0xaffffff0]  r3 = 00000001 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  ed407802 <- [0xdead3000]  r2 = ed407802 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  56756b89 <- [0xdead3004]  r3 = 56756b89 
    860C  add     r2, r2, r3          ; r2 = 43b5e38b 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 43b5e38b  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  56756b89 <- [0xdead3004]  r2 = 56756b89 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = cead712a 
    8630  str     r2, [r3]            ;  [0xdead3004] <- cead712a  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  cead712a <- [0xdead3004]  r1 = cead712a 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  43b5e38b <- [0xdead3000]  r2 = 43b5e38b 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 8d1892a1 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 8d1892a1  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  43b5e38b <- [0xdead3000]  r3 = 43b5e38b 
    8660  ror     r2, r3, #0x10       ; r2 = e38b43b5 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- e38b43b5  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  9c79756d <- [0xdead3008]  r1 = 9c79756d 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  ff8c8d96 <- [0xdead300c]  r2 = ff8c8d96 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 9c060303 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 9c060303  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  ff8c8d96 <- [0xdead300c]  r2 = ff8c8d96 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 8c8d96ff 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 8c8d96ff  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  8c8d96ff <- [0xdead300c]  r1 = 8c8d96ff 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  9c060303 <- [0xdead3008]  r2 = 9c060303 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 108b95fc 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 108b95fc  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  e38b43b5 <- [0xdead3000]  r2 = e38b43b5 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  108b95fc <- [0xdead300c]  r3 = 108b95fc 
    86EC  add     r2, r2, r3          ; r2 = f416d9b1 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- f416d9b1  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  108b95fc <- [0xdead300c]  r2 = 108b95fc 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 72bf8211 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 72bf8211  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  72bf8211 <- [0xdead300c]  r1 = 72bf8211 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  f416d9b1 <- [0xdead3000]  r2 = f416d9b1 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 86a95ba0 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 86a95ba0  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  9c060303 <- [0xdead3008]  r1 = 9c060303 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  8d1892a1 <- [0xdead3004]  r2 = 8d1892a1 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 291e95a4 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 291e95a4  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  8d1892a1 <- [0xdead3004]  r2 = 8d1892a1 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 8c4950c6 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 8c4950c6  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  8c4950c6 <- [0xdead3004]  r1 = 8c4950c6 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  291e95a4 <- [0xdead3008]  r2 = 291e95a4 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = a557c562 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- a557c562  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  291e95a4 <- [0xdead3008]  r2 = 291e95a4 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 95a4291e 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 95a4291e  
    87C0  ldr     r3, [fp, #-0xc]     ;         1 <- [0xaffffff0]  r3 = 00000001 
    87C4  add     r3, r3, #1          ; r3 = 00000002 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 2  
    87CC  ldr     r3, [fp, #-0xc]     ;         2 <- [0xaffffff0]  r3 = 00000002 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  f416d9b1 <- [0xdead3000]  r2 = f416d9b1 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  a557c562 <- [0xdead3004]  r3 = a557c562 
    860C  add     r2, r2, r3          ; r2 = 996e9f13 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 996e9f13  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  a557c562 <- [0xdead3004]  r2 = a557c562 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = aaf8ac54 
    8630  str     r2, [r3]            ;  [0xdead3004] <- aaf8ac54  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  aaf8ac54 <- [0xdead3004]  r1 = aaf8ac54 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  996e9f13 <- [0xdead3000]  r2 = 996e9f13 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 33963347 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 33963347  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  996e9f13 <- [0xdead3000]  r3 = 996e9f13 
    8660  ror     r2, r3, #0x10       ; r2 = 9f13996e 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 9f13996e  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  95a4291e <- [0xdead3008]  r1 = 95a4291e 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  86a95ba0 <- [0xdead300c]  r2 = 86a95ba0 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 1c4d84be 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 1c4d84be  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  86a95ba0 <- [0xdead300c]  r2 = 86a95ba0 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = a95ba086 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- a95ba086  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  a95ba086 <- [0xdead300c]  r1 = a95ba086 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  1c4d84be <- [0xdead3008]  r2 = 1c4d84be 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = b5162438 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- b5162438  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  9f13996e <- [0xdead3000]  r2 = 9f13996e 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  b5162438 <- [0xdead300c]  r3 = b5162438 
    86EC  add     r2, r2, r3          ; r2 = 5429bda6 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 5429bda6  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  b5162438 <- [0xdead300c]  r2 = b5162438 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = c48716a2 
    8710  str     r2, [r3]            ;  [0xdead300c] <- c48716a2  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  c48716a2 <- [0xdead300c]  r1 = c48716a2 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  5429bda6 <- [0xdead3000]  r2 = 5429bda6 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 90aeab04 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 90aeab04  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  1c4d84be <- [0xdead3008]  r1 = 1c4d84be 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  33963347 <- [0xdead3004]  r2 = 33963347 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 4fe3b805 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 4fe3b805  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  33963347 <- [0xdead3004]  r2 = 33963347 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = cb19a399 
    8778  str     r2, [r3]            ;  [0xdead3004] <- cb19a399  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  cb19a399 <- [0xdead3004]  r1 = cb19a399 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  4fe3b805 <- [0xdead3008]  r2 = 4fe3b805 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 84fa1b9c 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 84fa1b9c  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  4fe3b805 <- [0xdead3008]  r2 = 4fe3b805 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = b8054fe3 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- b8054fe3  
    87C0  ldr     r3, [fp, #-0xc]     ;         2 <- [0xaffffff0]  r3 = 00000002 
    87C4  add     r3, r3, #1          ; r3 = 00000003 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 3  
    87CC  ldr     r3, [fp, #-0xc]     ;         3 <- [0xaffffff0]  r3 = 00000003 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  5429bda6 <- [0xdead3000]  r2 = 5429bda6 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  84fa1b9c <- [0xdead3004]  r3 = 84fa1b9c 
    860C  add     r2, r2, r3          ; r2 = d923d942 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- d923d942  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  84fa1b9c <- [0xdead3004]  r2 = 84fa1b9c 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 9f437390 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 9f437390  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  9f437390 <- [0xdead3004]  r1 = 9f437390 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  d923d942 <- [0xdead3000]  r2 = d923d942 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 4660aad2 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 4660aad2  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  d923d942 <- [0xdead3000]  r3 = d923d942 
    8660  ror     r2, r3, #0x10       ; r2 = d942d923 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- d942d923  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  b8054fe3 <- [0xdead3008]  r1 = b8054fe3 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  90aeab04 <- [0xdead300c]  r2 = 90aeab04 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 48b3fae7 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 48b3fae7  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  90aeab04 <- [0xdead300c]  r2 = 90aeab04 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = aeab0490 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- aeab0490  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  aeab0490 <- [0xdead300c]  r1 = aeab0490 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  48b3fae7 <- [0xdead3008]  r2 = 48b3fae7 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = e618fe77 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- e618fe77  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  d942d923 <- [0xdead3000]  r2 = d942d923 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  e618fe77 <- [0xdead300c]  r3 = e618fe77 
    86EC  add     r2, r2, r3          ; r2 = bf5bd79a 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- bf5bd79a  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  e618fe77 <- [0xdead300c]  r2 = e618fe77 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 1fcefcc3 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 1fcefcc3  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  1fcefcc3 <- [0xdead300c]  r1 = 1fcefcc3 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  bf5bd79a <- [0xdead3000]  r2 = bf5bd79a 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = a0952b59 
    8734  str     r2, [r3]            ;  [0xdead300c] <- a0952b59  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  48b3fae7 <- [0xdead3008]  r1 = 48b3fae7 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  4660aad2 <- [0xdead3004]  r2 = 4660aad2 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 8f14a5b9 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 8f14a5b9  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  4660aad2 <- [0xdead3004]  r2 = 4660aad2 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 30556923 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 30556923  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  30556923 <- [0xdead3004]  r1 = 30556923 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  8f14a5b9 <- [0xdead3008]  r2 = 8f14a5b9 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = bf41cc9a 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- bf41cc9a  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  8f14a5b9 <- [0xdead3008]  r2 = 8f14a5b9 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = a5b98f14 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- a5b98f14  
    87C0  ldr     r3, [fp, #-0xc]     ;         3 <- [0xaffffff0]  r3 = 00000003 
    87C4  add     r3, r3, #1          ; r3 = 00000004 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 4  
    87CC  ldr     r3, [fp, #-0xc]     ;         4 <- [0xaffffff0]  r3 = 00000004 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  bf5bd79a <- [0xdead3000]  r2 = bf5bd79a 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  bf41cc9a <- [0xdead3004]  r3 = bf41cc9a 
    860C  add     r2, r2, r3          ; r2 = 7e9da434 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 7e9da434  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  bf41cc9a <- [0xdead3004]  r2 = bf41cc9a 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = e8399357 
    8630  str     r2, [r3]            ;  [0xdead3004] <- e8399357  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  e8399357 <- [0xdead3004]  r1 = e8399357 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  7e9da434 <- [0xdead3000]  r2 = 7e9da434 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 96a43763 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 96a43763  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  7e9da434 <- [0xdead3000]  r3 = 7e9da434 
    8660  ror     r2, r3, #0x10       ; r2 = a4347e9d 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- a4347e9d  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  a5b98f14 <- [0xdead3008]  r1 = a5b98f14 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  a0952b59 <- [0xdead300c]  r2 = a0952b59 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 464eba6d 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 464eba6d  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  a0952b59 <- [0xdead300c]  r2 = a0952b59 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 952b59a0 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 952b59a0  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  952b59a0 <- [0xdead300c]  r1 = 952b59a0 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  464eba6d <- [0xdead3008]  r2 = 464eba6d 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = d365e3cd 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- d365e3cd  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  a4347e9d <- [0xdead3000]  r2 = a4347e9d 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  d365e3cd <- [0xdead300c]  r3 = d365e3cd 
    86EC  add     r2, r2, r3          ; r2 = 779a626a 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 779a626a  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  d365e3cd <- [0xdead300c]  r2 = d365e3cd 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = bc79ba6c 
    8710  str     r2, [r3]            ;  [0xdead300c] <- bc79ba6c  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  bc79ba6c <- [0xdead300c]  r1 = bc79ba6c 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  779a626a <- [0xdead3000]  r2 = 779a626a 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = cbe3d806 
    8734  str     r2, [r3]            ;  [0xdead300c] <- cbe3d806  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  464eba6d <- [0xdead3008]  r1 = 464eba6d 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  96a43763 <- [0xdead3004]  r2 = 96a43763 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = dcf2f1d0 
    875C  str     r2, [r3]            ;  [0xdead3008] <- dcf2f1d0  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  96a43763 <- [0xdead3004]  r2 = 96a43763 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 521bb1cb 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 521bb1cb  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  521bb1cb <- [0xdead3004]  r1 = 521bb1cb 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  dcf2f1d0 <- [0xdead3008]  r2 = dcf2f1d0 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 8ee9401b 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 8ee9401b  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  dcf2f1d0 <- [0xdead3008]  r2 = dcf2f1d0 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = f1d0dcf2 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- f1d0dcf2  
    87C0  ldr     r3, [fp, #-0xc]     ;         4 <- [0xaffffff0]  r3 = 00000004 
    87C4  add     r3, r3, #1          ; r3 = 00000005 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 5  
    87CC  ldr     r3, [fp, #-0xc]     ;         5 <- [0xaffffff0]  r3 = 00000005 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  779a626a <- [0xdead3000]  r2 = 779a626a 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  8ee9401b <- [0xdead3004]  r3 = 8ee9401b 
    860C  add     r2, r2, r3          ; r2 = 0683a285 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 683a285  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  8ee9401b <- [0xdead3004]  r2 = 8ee9401b 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = dd280371 
    8630  str     r2, [r3]            ;  [0xdead3004] <- dd280371  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  dd280371 <- [0xdead3004]  r1 = dd280371 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;   683a285 <- [0xdead3000]  r2 = 0683a285 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = dbaba1f4 
    8654  str     r2, [r3]            ;  [0xdead3004] <- dbaba1f4  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;   683a285 <- [0xdead3000]  r3 = 0683a285 
    8660  ror     r2, r3, #0x10       ; r2 = a2850683 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- a2850683  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  f1d0dcf2 <- [0xdead3008]  r1 = f1d0dcf2 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  cbe3d806 <- [0xdead300c]  r2 = cbe3d806 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = bdb4b4f8 
    8690  str     r2, [r3]            ;  [0xdead3008] <- bdb4b4f8  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  cbe3d806 <- [0xdead300c]  r2 = cbe3d806 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = e3d806cb 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- e3d806cb  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  e3d806cb <- [0xdead300c]  r1 = e3d806cb 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  bdb4b4f8 <- [0xdead3008]  r2 = bdb4b4f8 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 5e6cb233 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 5e6cb233  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  a2850683 <- [0xdead3000]  r2 = a2850683 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  5e6cb233 <- [0xdead300c]  r3 = 5e6cb233 
    86EC  add     r2, r2, r3          ; r2 = 00f1b8b6 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- f1b8b6  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  5e6cb233 <- [0xdead300c]  r2 = 5e6cb233 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 96466bcd 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 96466bcd  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  96466bcd <- [0xdead300c]  r1 = 96466bcd 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;    f1b8b6 <- [0xdead3000]  r2 = 00f1b8b6 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 96b7d37b 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 96b7d37b  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  bdb4b4f8 <- [0xdead3008]  r1 = bdb4b4f8 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  dbaba1f4 <- [0xdead3004]  r2 = dbaba1f4 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 996056ec 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 996056ec  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  dbaba1f4 <- [0xdead3004]  r2 = dbaba1f4 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = d5d0fa6d 
    8778  str     r2, [r3]            ;  [0xdead3004] <- d5d0fa6d  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  d5d0fa6d <- [0xdead3004]  r1 = d5d0fa6d 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  996056ec <- [0xdead3008]  r2 = 996056ec 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 4cb0ac81 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 4cb0ac81  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  996056ec <- [0xdead3008]  r2 = 996056ec 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 56ec9960 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 56ec9960  
    87C0  ldr     r3, [fp, #-0xc]     ;         5 <- [0xaffffff0]  r3 = 00000005 
    87C4  add     r3, r3, #1          ; r3 = 00000006 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 6  
    87CC  ldr     r3, [fp, #-0xc]     ;         6 <- [0xaffffff0]  r3 = 00000006 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;    f1b8b6 <- [0xdead3000]  r2 = 00f1b8b6 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  4cb0ac81 <- [0xdead3004]  r3 = 4cb0ac81 
    860C  add     r2, r2, r3          ; r2 = 4da26537 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 4da26537  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  4cb0ac81 <- [0xdead3004]  r2 = 4cb0ac81 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 96159029 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 96159029  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  96159029 <- [0xdead3004]  r1 = 96159029 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  4da26537 <- [0xdead3000]  r2 = 4da26537 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = dbb7f51e 
    8654  str     r2, [r3]            ;  [0xdead3004] <- dbb7f51e  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  4da26537 <- [0xdead3000]  r3 = 4da26537 
    8660  ror     r2, r3, #0x10       ; r2 = 65374da2 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 65374da2  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  56ec9960 <- [0xdead3008]  r1 = 56ec9960 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  96b7d37b <- [0xdead300c]  r2 = 96b7d37b 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = eda46cdb 
    8690  str     r2, [r3]            ;  [0xdead3008] <- eda46cdb  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  96b7d37b <- [0xdead300c]  r2 = 96b7d37b 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = b7d37b96 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- b7d37b96  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  b7d37b96 <- [0xdead300c]  r1 = b7d37b96 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  eda46cdb <- [0xdead3008]  r2 = eda46cdb 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 5a77174d 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 5a77174d  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  65374da2 <- [0xdead3000]  r2 = 65374da2 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  5a77174d <- [0xdead300c]  r3 = 5a77174d 
    86EC  add     r2, r2, r3          ; r2 = bfae64ef 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- bfae64ef  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  5a77174d <- [0xdead300c]  r2 = 5a77174d 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = e2e9ab4e 
    8710  str     r2, [r3]            ;  [0xdead300c] <- e2e9ab4e  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  e2e9ab4e <- [0xdead300c]  r1 = e2e9ab4e 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  bfae64ef <- [0xdead3000]  r2 = bfae64ef 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 5d47cfa1 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 5d47cfa1  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  eda46cdb <- [0xdead3008]  r1 = eda46cdb 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  dbb7f51e <- [0xdead3004]  r2 = dbb7f51e 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = c95c61f9 
    875C  str     r2, [r3]            ;  [0xdead3008] <- c95c61f9  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  dbb7f51e <- [0xdead3004]  r2 = dbb7f51e 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = dbfa8f6d 
    8778  str     r2, [r3]            ;  [0xdead3004] <- dbfa8f6d  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  dbfa8f6d <- [0xdead3004]  r1 = dbfa8f6d 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  c95c61f9 <- [0xdead3008]  r2 = c95c61f9 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 12a6ee94 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 12a6ee94  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  c95c61f9 <- [0xdead3008]  r2 = c95c61f9 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 61f9c95c 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 61f9c95c  
    87C0  ldr     r3, [fp, #-0xc]     ;         6 <- [0xaffffff0]  r3 = 00000006 
    87C4  add     r3, r3, #1          ; r3 = 00000007 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 7  
    87CC  ldr     r3, [fp, #-0xc]     ;         7 <- [0xaffffff0]  r3 = 00000007 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  bfae64ef <- [0xdead3000]  r2 = bfae64ef 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  12a6ee94 <- [0xdead3004]  r3 = 12a6ee94 
    860C  add     r2, r2, r3          ; r2 = d2555383 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- d2555383  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  12a6ee94 <- [0xdead3004]  r2 = 12a6ee94 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 54ddd282 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 54ddd282  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  54ddd282 <- [0xdead3004]  r1 = 54ddd282 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  d2555383 <- [0xdead3000]  r2 = d2555383 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 86888101 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 86888101  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  d2555383 <- [0xdead3000]  r3 = d2555383 
    8660  ror     r2, r3, #0x10       ; r2 = 5383d255 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 5383d255  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  61f9c95c <- [0xdead3008]  r1 = 61f9c95c 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  5d47cfa1 <- [0xdead300c]  r2 = 5d47cfa1 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = bf4198fd 
    8690  str     r2, [r3]            ;  [0xdead3008] <- bf4198fd  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  5d47cfa1 <- [0xdead300c]  r2 = 5d47cfa1 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 47cfa15d 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 47cfa15d  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  47cfa15d <- [0xdead300c]  r1 = 47cfa15d 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  bf4198fd <- [0xdead3008]  r2 = bf4198fd 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = f88e39a0 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- f88e39a0  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  5383d255 <- [0xdead3000]  r2 = 5383d255 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  f88e39a0 <- [0xdead300c]  r3 = f88e39a0 
    86EC  add     r2, r2, r3          ; r2 = 4c120bf5 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 4c120bf5  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  f88e39a0 <- [0xdead300c]  r2 = f88e39a0 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = c7341f11 
    8710  str     r2, [r3]            ;  [0xdead300c] <- c7341f11  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  c7341f11 <- [0xdead300c]  r1 = c7341f11 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  4c120bf5 <- [0xdead3000]  r2 = 4c120bf5 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 8b2614e4 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 8b2614e4  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  bf4198fd <- [0xdead3008]  r1 = bf4198fd 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  86888101 <- [0xdead3004]  r2 = 86888101 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 45ca19fe 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 45ca19fe  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  86888101 <- [0xdead3004]  r2 = 86888101 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 444080c3 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 444080c3  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  444080c3 <- [0xdead3004]  r1 = 444080c3 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  45ca19fe <- [0xdead3008]  r2 = 45ca19fe 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 018a993d 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 18a993d  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  45ca19fe <- [0xdead3008]  r2 = 45ca19fe 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 19fe45ca 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 19fe45ca  
    87C0  ldr     r3, [fp, #-0xc]     ;         7 <- [0xaffffff0]  r3 = 00000007 
    87C4  add     r3, r3, #1          ; r3 = 00000008 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 8  
    87CC  ldr     r3, [fp, #-0xc]     ;         8 <- [0xaffffff0]  r3 = 00000008 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  4c120bf5 <- [0xdead3000]  r2 = 4c120bf5 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;   18a993d <- [0xdead3004]  r3 = 018a993d 
    860C  add     r2, r2, r3          ; r2 = 4d9ca532 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 4d9ca532  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;   18a993d <- [0xdead3004]  r2 = 018a993d 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 315327a0 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 315327a0  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  315327a0 <- [0xdead3004]  r1 = 315327a0 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  4d9ca532 <- [0xdead3000]  r2 = 4d9ca532 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 7ccf8292 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 7ccf8292  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  4d9ca532 <- [0xdead3000]  r3 = 4d9ca532 
    8660  ror     r2, r3, #0x10       ; r2 = a5324d9c 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- a5324d9c  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  19fe45ca <- [0xdead3008]  r1 = 19fe45ca 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  8b2614e4 <- [0xdead300c]  r2 = 8b2614e4 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = a5245aae 
    8690  str     r2, [r3]            ;  [0xdead3008] <- a5245aae  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  8b2614e4 <- [0xdead300c]  r2 = 8b2614e4 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 2614e48b 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 2614e48b  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  2614e48b <- [0xdead300c]  r1 = 2614e48b 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  a5245aae <- [0xdead3008]  r2 = a5245aae 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 8330be25 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 8330be25  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  a5324d9c <- [0xdead3000]  r2 = a5324d9c 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  8330be25 <- [0xdead300c]  r3 = 8330be25 
    86EC  add     r2, r2, r3          ; r2 = 28630bc1 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 28630bc1  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  8330be25 <- [0xdead300c]  r2 = 8330be25 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 17c4b066 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 17c4b066  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  17c4b066 <- [0xdead300c]  r1 = 17c4b066 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  28630bc1 <- [0xdead3000]  r2 = 28630bc1 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 3fa7bba7 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 3fa7bba7  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  a5245aae <- [0xdead3008]  r1 = a5245aae 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  7ccf8292 <- [0xdead3004]  r2 = 7ccf8292 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 21f3dd40 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 21f3dd40  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  7ccf8292 <- [0xdead3004]  r2 = 7ccf8292 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 67c1493e 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 67c1493e  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  67c1493e <- [0xdead3004]  r1 = 67c1493e 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  21f3dd40 <- [0xdead3008]  r2 = 21f3dd40 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 4632947e 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 4632947e  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  21f3dd40 <- [0xdead3008]  r2 = 21f3dd40 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = dd4021f3 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- dd4021f3  
    87C0  ldr     r3, [fp, #-0xc]     ;         8 <- [0xaffffff0]  r3 = 00000008 
    87C4  add     r3, r3, #1          ; r3 = 00000009 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- 9  
    87CC  ldr     r3, [fp, #-0xc]     ;         9 <- [0xaffffff0]  r3 = 00000009 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  28630bc1 <- [0xdead3000]  r2 = 28630bc1 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  4632947e <- [0xdead3004]  r3 = 4632947e 
    860C  add     r2, r2, r3          ; r2 = 6e95a03f 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 6e95a03f  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  4632947e <- [0xdead3004]  r2 = 4632947e 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = c6528fc8 
    8630  str     r2, [r3]            ;  [0xdead3004] <- c6528fc8  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  c6528fc8 <- [0xdead3004]  r1 = c6528fc8 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  6e95a03f <- [0xdead3000]  r2 = 6e95a03f 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = a8c72ff7 
    8654  str     r2, [r3]            ;  [0xdead3004] <- a8c72ff7  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  6e95a03f <- [0xdead3000]  r3 = 6e95a03f 
    8660  ror     r2, r3, #0x10       ; r2 = a03f6e95 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- a03f6e95  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  dd4021f3 <- [0xdead3008]  r1 = dd4021f3 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  3fa7bba7 <- [0xdead300c]  r2 = 3fa7bba7 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 1ce7dd9a 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 1ce7dd9a  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  3fa7bba7 <- [0xdead300c]  r2 = 3fa7bba7 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = a7bba73f 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- a7bba73f  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  a7bba73f <- [0xdead300c]  r1 = a7bba73f 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  1ce7dd9a <- [0xdead3008]  r2 = 1ce7dd9a 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = bb5c7aa5 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- bb5c7aa5  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  a03f6e95 <- [0xdead3000]  r2 = a03f6e95 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  bb5c7aa5 <- [0xdead300c]  r3 = bb5c7aa5 
    86EC  add     r2, r2, r3          ; r2 = 5b9be93a 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 5b9be93a  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  bb5c7aa5 <- [0xdead300c]  r2 = bb5c7aa5 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 8f54b76b 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 8f54b76b  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  8f54b76b <- [0xdead300c]  r1 = 8f54b76b 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  5b9be93a <- [0xdead3000]  r2 = 5b9be93a 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = d4cf5e51 
    8734  str     r2, [r3]            ;  [0xdead300c] <- d4cf5e51  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  1ce7dd9a <- [0xdead3008]  r1 = 1ce7dd9a 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  a8c72ff7 <- [0xdead3004]  r2 = a8c72ff7 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = c5af0d91 
    875C  str     r2, [r3]            ;  [0xdead3008] <- c5af0d91  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  a8c72ff7 <- [0xdead3004]  r2 = a8c72ff7 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 6397fbd4 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 6397fbd4  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  6397fbd4 <- [0xdead3004]  r1 = 6397fbd4 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  c5af0d91 <- [0xdead3008]  r2 = c5af0d91 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = a638f645 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- a638f645  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  c5af0d91 <- [0xdead3008]  r2 = c5af0d91 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 0d91c5af 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- d91c5af  
    87C0  ldr     r3, [fp, #-0xc]     ;         9 <- [0xaffffff0]  r3 = 00000009 
    87C4  add     r3, r3, #1          ; r3 = 0000000a 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- a  
    87CC  ldr     r3, [fp, #-0xc]     ;         a <- [0xaffffff0]  r3 = 0000000a 
    87D0  cmp     r3, #0xb            ; cpsr = 800001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;  5b9be93a <- [0xdead3000]  r2 = 5b9be93a 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  a638f645 <- [0xdead3004]  r3 = a638f645 
    860C  add     r2, r2, r3          ; r2 = 01d4df7f 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- 1d4df7f  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  a638f645 <- [0xdead3004]  r2 = a638f645 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = c71ec8b4 
    8630  str     r2, [r3]            ;  [0xdead3004] <- c71ec8b4  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  c71ec8b4 <- [0xdead3004]  r1 = c71ec8b4 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;   1d4df7f <- [0xdead3000]  r2 = 01d4df7f 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = c6ca17cb 
    8654  str     r2, [r3]            ;  [0xdead3004] <- c6ca17cb  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;   1d4df7f <- [0xdead3000]  r3 = 01d4df7f 
    8660  ror     r2, r3, #0x10       ; r2 = df7f01d4 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- df7f01d4  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;   d91c5af <- [0xdead3008]  r1 = 0d91c5af 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  d4cf5e51 <- [0xdead300c]  r2 = d4cf5e51 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = e2612400 
    8690  str     r2, [r3]            ;  [0xdead3008] <- e2612400  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  d4cf5e51 <- [0xdead300c]  r2 = d4cf5e51 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = cf5e51d4 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- cf5e51d4  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;  cf5e51d4 <- [0xdead300c]  r1 = cf5e51d4 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  e2612400 <- [0xdead3008]  r2 = e2612400 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 2d3f75d4 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 2d3f75d4  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  df7f01d4 <- [0xdead3000]  r2 = df7f01d4 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  2d3f75d4 <- [0xdead300c]  r3 = 2d3f75d4 
    86EC  add     r2, r2, r3          ; r2 = 0cbe77a8 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- cbe77a8  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  2d3f75d4 <- [0xdead300c]  r2 = 2d3f75d4 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = eeba85a7 
    8710  str     r2, [r3]            ;  [0xdead300c] <- eeba85a7  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  eeba85a7 <- [0xdead300c]  r1 = eeba85a7 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;   cbe77a8 <- [0xdead3000]  r2 = 0cbe77a8 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = e204f20f 
    8734  str     r2, [r3]            ;  [0xdead300c] <- e204f20f  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  e2612400 <- [0xdead3008]  r1 = e2612400 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  c6ca17cb <- [0xdead3004]  r2 = c6ca17cb 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = a92b3bcb 
    875C  str     r2, [r3]            ;  [0xdead3008] <- a92b3bcb  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  c6ca17cb <- [0xdead3004]  r2 = c6ca17cb 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 650be5e3 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 650be5e3  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  650be5e3 <- [0xdead3004]  r1 = 650be5e3 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  a92b3bcb <- [0xdead3008]  r2 = a92b3bcb 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = cc20de28 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- cc20de28  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  a92b3bcb <- [0xdead3008]  r2 = a92b3bcb 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 3bcba92b 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 3bcba92b  
    87C0  ldr     r3, [fp, #-0xc]     ;         a <- [0xaffffff0]  r3 = 0000000a 
    87C4  add     r3, r3, #1          ; r3 = 0000000b 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- b  
    87CC  ldr     r3, [fp, #-0xc]     ;         b <- [0xaffffff0]  r3 = 0000000b 
    87D0  cmp     r3, #0xb            ; cpsr = 600001d3 
    87D4  ble     #0x85f8             ; pc = 000085f8 
    85F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    85FC  ldr     r2, [r3]            ;   cbe77a8 <- [0xdead3000]  r2 = 0cbe77a8 
    8600  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8604  add     r3, r3, #4          ; r3 = dead3004 
    8608  ldr     r3, [r3]            ;  cc20de28 <- [0xdead3004]  r3 = cc20de28 
    860C  add     r2, r2, r3          ; r2 = d8df55d0 
    8610  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8614  str     r2, [r3]            ;  [0xdead3000] <- d8df55d0  
    8618  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    861C  add     r3, r3, #4          ; r3 = dead3004 
    8620  ldr     r2, [r3]            ;  cc20de28 <- [0xdead3004]  r2 = cc20de28 
    8624  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8628  add     r3, r3, #4          ; r3 = dead3004 
    862C  ror     r2, r2, #0x1b       ; r2 = 841bc519 
    8630  str     r2, [r3]            ;  [0xdead3004] <- 841bc519  
    8634  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8638  add     r3, r3, #4          ; r3 = dead3004 
    863C  ldr     r1, [r3]            ;  841bc519 <- [0xdead3004]  r1 = 841bc519 
    8640  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8644  ldr     r2, [r3]            ;  d8df55d0 <- [0xdead3000]  r2 = d8df55d0 
    8648  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    864C  add     r3, r3, #4          ; r3 = dead3004 
    8650  eor     r2, r2, r1          ; r2 = 5cc490c9 
    8654  str     r2, [r3]            ;  [0xdead3004] <- 5cc490c9  
    8658  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    865C  ldr     r3, [r3]            ;  d8df55d0 <- [0xdead3000]  r3 = d8df55d0 
    8660  ror     r2, r3, #0x10       ; r2 = 55d0d8df 
    8664  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8668  str     r2, [r3]            ;  [0xdead3000] <- 55d0d8df  
    866C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8670  add     r3, r3, #8          ; r3 = dead3008 
    8674  ldr     r1, [r3]            ;  3bcba92b <- [0xdead3008]  r1 = 3bcba92b 
    8678  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    867C  add     r3, r3, #0xc        ; r3 = dead300c 
    8680  ldr     r2, [r3]            ;  e204f20f <- [0xdead300c]  r2 = e204f20f 
    8684  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8688  add     r3, r3, #8          ; r3 = dead3008 
    868C  add     r2, r1, r2          ; r2 = 1dd09b3a 
    8690  str     r2, [r3]            ;  [0xdead3008] <- 1dd09b3a  
    8694  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8698  add     r3, r3, #0xc        ; r3 = dead300c 
    869C  ldr     r2, [r3]            ;  e204f20f <- [0xdead300c]  r2 = e204f20f 
    86A0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86A4  add     r3, r3, #0xc        ; r3 = dead300c 
    86A8  ror     r2, r2, #0x18       ; r2 = 04f20fe2 
    86AC  str     r2, [r3]            ;  [0xdead300c] <- 4f20fe2  
    86B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86B4  add     r3, r3, #0xc        ; r3 = dead300c 
    86B8  ldr     r1, [r3]            ;   4f20fe2 <- [0xdead300c]  r1 = 04f20fe2 
    86BC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86C0  add     r3, r3, #8          ; r3 = dead3008 
    86C4  ldr     r2, [r3]            ;  1dd09b3a <- [0xdead3008]  r2 = 1dd09b3a 
    86C8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86CC  add     r3, r3, #0xc        ; r3 = dead300c 
    86D0  eor     r2, r2, r1          ; r2 = 192294d8 
    86D4  str     r2, [r3]            ;  [0xdead300c] <- 192294d8  
    86D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86DC  ldr     r2, [r3]            ;  55d0d8df <- [0xdead3000]  r2 = 55d0d8df 
    86E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86E4  add     r3, r3, #0xc        ; r3 = dead300c 
    86E8  ldr     r3, [r3]            ;  192294d8 <- [0xdead300c]  r3 = 192294d8 
    86EC  add     r2, r2, r3          ; r2 = 6ef36db7 
    86F0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86F4  str     r2, [r3]            ;  [0xdead3000] <- 6ef36db7  
    86F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    86FC  add     r3, r3, #0xc        ; r3 = dead300c 
    8700  ldr     r2, [r3]            ;  192294d8 <- [0xdead300c]  r2 = 192294d8 
    8704  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8708  add     r3, r3, #0xc        ; r3 = dead300c 
    870C  ror     r2, r2, #0x13       ; r2 = 529b0324 
    8710  str     r2, [r3]            ;  [0xdead300c] <- 529b0324  
    8714  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8718  add     r3, r3, #0xc        ; r3 = dead300c 
    871C  ldr     r1, [r3]            ;  529b0324 <- [0xdead300c]  r1 = 529b0324 
    8720  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8724  ldr     r2, [r3]            ;  6ef36db7 <- [0xdead3000]  r2 = 6ef36db7 
    8728  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    872C  add     r3, r3, #0xc        ; r3 = dead300c 
    8730  eor     r2, r2, r1          ; r2 = 3c686e93 
    8734  str     r2, [r3]            ;  [0xdead300c] <- 3c686e93  
    8738  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    873C  add     r3, r3, #8          ; r3 = dead3008 
    8740  ldr     r1, [r3]            ;  1dd09b3a <- [0xdead3008]  r1 = 1dd09b3a 
    8744  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8748  add     r3, r3, #4          ; r3 = dead3004 
    874C  ldr     r2, [r3]            ;  5cc490c9 <- [0xdead3004]  r2 = 5cc490c9 
    8750  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8754  add     r3, r3, #8          ; r3 = dead3008 
    8758  add     r2, r1, r2          ; r2 = 7a952c03 
    875C  str     r2, [r3]            ;  [0xdead3008] <- 7a952c03  
    8760  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8764  add     r3, r3, #4          ; r3 = dead3004 
    8768  ldr     r2, [r3]            ;  5cc490c9 <- [0xdead3004]  r2 = 5cc490c9 
    876C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8770  add     r3, r3, #4          ; r3 = dead3004 
    8774  ror     r2, r2, #0x19       ; r2 = 624864ae 
    8778  str     r2, [r3]            ;  [0xdead3004] <- 624864ae  
    877C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8780  add     r3, r3, #4          ; r3 = dead3004 
    8784  ldr     r1, [r3]            ;  624864ae <- [0xdead3004]  r1 = 624864ae 
    8788  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    878C  add     r3, r3, #8          ; r3 = dead3008 
    8790  ldr     r2, [r3]            ;  7a952c03 <- [0xdead3008]  r2 = 7a952c03 
    8794  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8798  add     r3, r3, #4          ; r3 = dead3004 
    879C  eor     r2, r2, r1          ; r2 = 18dd48ad 
    87A0  str     r2, [r3]            ;  [0xdead3004] <- 18dd48ad  
    87A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87A8  add     r3, r3, #8          ; r3 = dead3008 
    87AC  ldr     r2, [r3]            ;  7a952c03 <- [0xdead3008]  r2 = 7a952c03 
    87B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87B4  add     r3, r3, #8          ; r3 = dead3008 
    87B8  ror     r2, r2, #0x10       ; r2 = 2c037a95 
    87BC  str     r2, [r3]            ;  [0xdead3008] <- 2c037a95  
    87C0  ldr     r3, [fp, #-0xc]     ;         b <- [0xaffffff0]  r3 = 0000000b 
    87C4  add     r3, r3, #1          ; r3 = 0000000c 
    87C8  str     r3, [fp, #-0xc]     ;  [0xaffffff0] <- c  
    87CC  ldr     r3, [fp, #-0xc]     ;         c <- [0xaffffff0]  r3 = 0000000c 
    87D0  cmp     r3, #0xb            ; cpsr = 200001d3 
    87D4  ble     #0x85f8             ; pc = 000087d8 
    87D8  ldr     r3, [fp, #-8]       ;         8 <- [0xaffffff4]  r3 = 00000008 
    87DC  add     r3, r3, #4          ; r3 = 0000000c 
    87E0  str     r3, [fp, #-8]       ;  [0xaffffff4] <- c  
    87E4  ldr     r3, [fp, #-0x14]    ;        10 <- [0xafffffe8]  r3 = 00000010 
    87E8  sub     r3, r3, #4          ; r3 = 0000000c 
    87EC  ldr     r2, [fp, #-8]       ;         c <- [0xaffffff4]  r2 = 0000000c 
    87F0  cmp     r2, r3              ; cpsr = 600001d3 
    87F4  blt     #0x8528             ; pc = 000087f8 
    87F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    87FC  ldr     r2, [r3]            ;  6ef36db7 <- [0xdead3000]  r2 = 6ef36db7 
    8800  ldr     r3, [fp, #-0x14]    ;        10 <- [0xafffffe8]  r3 = 00000010 
    8804  sub     r3, r3, #0xc0000004 ; r3 = 4000000c 
    8808  lsl     r3, r3, #2          ; r3 = 00000030 
    880C  ldr     r1, [fp, #-0x3c]    ;  dead2000 <- [0xafffffc0]  r1 = dead2000 
    8810  add     r3, r1, r3          ; r3 = dead2030 
    8814  ldr     r3, [r3]            ;         1 <- [0xdead2030]  r3 = 00000001 
    8818  eor     r2, r2, r3          ; r2 = 6ef36db6 
    881C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8820  str     r2, [r3]            ;  [0xdead3000] <- 6ef36db6  
    8824  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8828  add     r3, r3, #4          ; r3 = dead3004 
    882C  ldr     r1, [r3]            ;  18dd48ad <- [0xdead3004]  r1 = 18dd48ad 
    8830  ldr     r3, [fp, #-0x14]    ;        10 <- [0xafffffe8]  r3 = 00000010 
    8834  sub     r3, r3, #0xc0000003 ; r3 = 4000000d 
    8838  lsl     r3, r3, #2          ; r3 = 00000034 
    883C  ldr     r2, [fp, #-0x3c]    ;  dead2000 <- [0xafffffc0]  r2 = dead2000 
    8840  add     r3, r2, r3          ; r3 = dead2034 
    8844  ldr     r2, [r3]            ;         0 <- [0xdead2034]  r2 = 00000000 
    8848  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    884C  add     r3, r3, #4          ; r3 = dead3004 
    8850  eor     r2, r2, r1          ; r2 = 18dd48ad 
    8854  str     r2, [r3]            ;  [0xdead3004] <- 18dd48ad  
    8858  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    885C  add     r3, r3, #8          ; r3 = dead3008 
    8860  ldr     r1, [r3]            ;  2c037a95 <- [0xdead3008]  r1 = 2c037a95 
    8864  ldr     r3, [fp, #-0x14]    ;        10 <- [0xafffffe8]  r3 = 00000010 
    8868  sub     r3, r3, #0xc0000002 ; r3 = 4000000e 
    886C  lsl     r3, r3, #2          ; r3 = 00000038 
    8870  ldr     r2, [fp, #-0x3c]    ;  dead2000 <- [0xafffffc0]  r2 = dead2000 
    8874  add     r3, r2, r3          ; r3 = dead2038 
    8878  ldr     r2, [r3]            ;         0 <- [0xdead2038]  r2 = 00000000 
    887C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8880  add     r3, r3, #8          ; r3 = dead3008 
    8884  eor     r2, r2, r1          ; r2 = 2c037a95 
    8888  str     r2, [r3]            ;  [0xdead3008] <- 2c037a95  
    888C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8890  add     r3, r3, #0xc        ; r3 = dead300c 
    8894  ldr     r1, [r3]            ;  3c686e93 <- [0xdead300c]  r1 = 3c686e93 
    8898  ldr     r3, [fp, #-0x14]    ;        10 <- [0xafffffe8]  r3 = 00000010 
    889C  sub     r3, r3, #0xc0000001 ; r3 = 4000000f 
    88A0  lsl     r3, r3, #2          ; r3 = 0000003c 
    88A4  ldr     r2, [fp, #-0x3c]    ;  dead2000 <- [0xafffffc0]  r2 = dead2000 
    88A8  add     r3, r2, r3          ; r3 = dead203c 
    88AC  ldr     r2, [r3]            ;         0 <- [0xdead203c]  r2 = 00000000 
    88B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    88B4  add     r3, r3, #0xc        ; r3 = dead300c 
    88B8  eor     r2, r2, r1          ; r2 = 3c686e93 
    88BC  str     r2, [r3]            ;  [0xdead300c] <- 3c686e93  
    88C0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    88C4  ldr     r2, [r3]            ;  6ef36db6 <- [0xdead3000]  r2 = 6ef36db6 
    88C8  ldr     r3, [fp, #-0x2c]    ;         2 <- [0xafffffd0]  r3 = 00000002 
    88CC  eor     r2, r2, r3          ; r2 = 6ef36db4 
    88D0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    88D4  str     r2, [r3]            ;  [0xdead3000] <- 6ef36db4  
    88D8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    88DC  add     r3, r3, #4          ; r3 = dead3004 
    88E0  ldr     r1, [r3]            ;  18dd48ad <- [0xdead3004]  r1 = 18dd48ad 
    88E4  ldr     r2, [fp, #-0x28]    ;         0 <- [0xafffffd4]  r2 = 00000000 
    88E8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    88EC  add     r3, r3, #4          ; r3 = dead3004 
    88F0  eor     r2, r2, r1          ; r2 = 18dd48ad 
    88F4  str     r2, [r3]            ;  [0xdead3004] <- 18dd48ad  
    88F8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    88FC  add     r3, r3, #8          ; r3 = dead3008 
    8900  ldr     r1, [r3]            ;  2c037a95 <- [0xdead3008]  r1 = 2c037a95 
    8904  ldr     r2, [fp, #-0x24]    ;         4 <- [0xafffffd8]  r2 = 00000004 
    8908  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    890C  add     r3, r3, #8          ; r3 = dead3008 
    8910  eor     r2, r2, r1          ; r2 = 2c037a91 
    8914  str     r2, [r3]            ;  [0xdead3008] <- 2c037a91  
    8918  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    891C  add     r3, r3, #0xc        ; r3 = dead300c 
    8920  ldr     r1, [r3]            ;  3c686e93 <- [0xdead300c]  r1 = 3c686e93 
    8924  ldr     r2, [fp, #-0x20]    ;         0 <- [0xafffffdc]  r2 = 00000000 
    8928  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    892C  add     r3, r3, #0xc        ; r3 = dead300c 
    8930  eor     r2, r2, r1          ; r2 = 3c686e93 
    8934  str     r2, [r3]            ;  [0xdead300c] <- 3c686e93  
    8938  mov     r3, #0              ; r3 = 00000000 
    893C  str     r3, [fp, #-0x10]    ;  [0xafffffec] <- 0  
    8940  b       #0x8b18             ; pc = 00008b18 
    8B18  ldr     r3, [fp, #-0x10]    ;         0 <- [0xafffffec]  r3 = 00000000 
    8B1C  cmp     r3, #0xb            ; cpsr = 800001d3 
    8B20  ble     #0x8944             ; pc = 00008944 
    8944  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8948  ldr     r2, [r3]            ;  6ef36db4 <- [0xdead3000]  r2 = 6ef36db4 
    894C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8950  add     r3, r3, #4          ; r3 = dead3004 
    8954  ldr     r3, [r3]            ;  18dd48ad <- [0xdead3004]  r3 = 18dd48ad 
    8958  add     r2, r2, r3          ; r2 = 87d0b661 
    895C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8960  str     r2, [r3]            ;  [0xdead3000] <- 87d0b661  
    8964  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8968  add     r3, r3, #4          ; r3 = dead3004 
    896C  ldr     r2, [r3]            ;  18dd48ad <- [0xdead3004]  r2 = 18dd48ad 
    8970  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8974  add     r3, r3, #4          ; r3 = dead3004 
    8978  ror     r2, r2, #0x1b       ; r2 = 1ba915a3 
    897C  str     r2, [r3]            ;  [0xdead3004] <- 1ba915a3  
    8980  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8984  add     r3, r3, #4          ; r3 = dead3004 
    8988  ldr     r1, [r3]            ;  1ba915a3 <- [0xdead3004]  r1 = 1ba915a3 
    898C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8990  ldr     r2, [r3]            ;  87d0b661 <- [0xdead3000]  r2 = 87d0b661 
    8994  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8998  add     r3, r3, #4          ; r3 = dead3004 
    899C  eor     r2, r2, r1          ; r2 = 9c79a3c2 
    89A0  str     r2, [r3]            ;  [0xdead3004] <- 9c79a3c2  
    89A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89A8  ldr     r3, [r3]            ;  87d0b661 <- [0xdead3000]  r3 = 87d0b661 
    89AC  ror     r2, r3, #0x10       ; r2 = b66187d0 
    89B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89B4  str     r2, [r3]            ;  [0xdead3000] <- b66187d0  
    89B8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89BC  add     r3, r3, #8          ; r3 = dead3008 
    89C0  ldr     r1, [r3]            ;  2c037a91 <- [0xdead3008]  r1 = 2c037a91 
    89C4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89C8  add     r3, r3, #0xc        ; r3 = dead300c 
    89CC  ldr     r2, [r3]            ;  3c686e93 <- [0xdead300c]  r2 = 3c686e93 
    89D0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89D4  add     r3, r3, #8          ; r3 = dead3008 
    89D8  add     r2, r1, r2          ; r2 = 686be924 
    89DC  str     r2, [r3]            ;  [0xdead3008] <- 686be924  
    89E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89E4  add     r3, r3, #0xc        ; r3 = dead300c 
    89E8  ldr     r2, [r3]            ;  3c686e93 <- [0xdead300c]  r2 = 3c686e93 
    89EC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89F0  add     r3, r3, #0xc        ; r3 = dead300c 
    89F4  ror     r2, r2, #0x18       ; r2 = 686e933c 
    89F8  str     r2, [r3]            ;  [0xdead300c] <- 686e933c  
    89FC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A00  add     r3, r3, #0xc        ; r3 = dead300c 
    8A04  ldr     r1, [r3]            ;  686e933c <- [0xdead300c]  r1 = 686e933c 
    8A08  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A0C  add     r3, r3, #8          ; r3 = dead3008 
    8A10  ldr     r2, [r3]            ;  686be924 <- [0xdead3008]  r2 = 686be924 
    8A14  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A18  add     r3, r3, #0xc        ; r3 = dead300c 
    8A1C  eor     r2, r2, r1          ; r2 = 00057a18 
    8A20  str     r2, [r3]            ;  [0xdead300c] <- 57a18  
    8A24  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A28  ldr     r2, [r3]            ;  b66187d0 <- [0xdead3000]  r2 = b66187d0 
    8A2C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A30  add     r3, r3, #0xc        ; r3 = dead300c 
    8A34  ldr     r3, [r3]            ;     57a18 <- [0xdead300c]  r3 = 00057a18 
    8A38  add     r2, r2, r3          ; r2 = b66701e8 
    8A3C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A40  str     r2, [r3]            ;  [0xdead3000] <- b66701e8  
    8A44  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A48  add     r3, r3, #0xc        ; r3 = dead300c 
    8A4C  ldr     r2, [r3]            ;     57a18 <- [0xdead300c]  r2 = 00057a18 
    8A50  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A54  add     r3, r3, #0xc        ; r3 = dead300c 
    8A58  ror     r2, r2, #0x13       ; r2 = af430000 
    8A5C  str     r2, [r3]            ;  [0xdead300c] <- af430000  
    8A60  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A64  add     r3, r3, #0xc        ; r3 = dead300c 
    8A68  ldr     r1, [r3]            ;  af430000 <- [0xdead300c]  r1 = af430000 
    8A6C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A70  ldr     r2, [r3]            ;  b66701e8 <- [0xdead3000]  r2 = b66701e8 
    8A74  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A78  add     r3, r3, #0xc        ; r3 = dead300c 
    8A7C  eor     r2, r2, r1          ; r2 = 192401e8 
    8A80  str     r2, [r3]            ;  [0xdead300c] <- 192401e8  
    8A84  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A88  add     r3, r3, #8          ; r3 = dead3008 
    8A8C  ldr     r1, [r3]            ;  686be924 <- [0xdead3008]  r1 = 686be924 
    8A90  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A94  add     r3, r3, #4          ; r3 = dead3004 
    8A98  ldr     r2, [r3]            ;  9c79a3c2 <- [0xdead3004]  r2 = 9c79a3c2 
    8A9C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AA0  add     r3, r3, #8          ; r3 = dead3008 
    8AA4  add     r2, r1, r2          ; r2 = 04e58ce6 
    8AA8  str     r2, [r3]            ;  [0xdead3008] <- 4e58ce6  
    8AAC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AB0  add     r3, r3, #4          ; r3 = dead3004 
    8AB4  ldr     r2, [r3]            ;  9c79a3c2 <- [0xdead3004]  r2 = 9c79a3c2 
    8AB8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ABC  add     r3, r3, #4          ; r3 = dead3004 
    8AC0  ror     r2, r2, #0x19       ; r2 = 3cd1e14e 
    8AC4  str     r2, [r3]            ;  [0xdead3004] <- 3cd1e14e  
    8AC8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ACC  add     r3, r3, #4          ; r3 = dead3004 
    8AD0  ldr     r1, [r3]            ;  3cd1e14e <- [0xdead3004]  r1 = 3cd1e14e 
    8AD4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AD8  add     r3, r3, #8          ; r3 = dead3008 
    8ADC  ldr     r2, [r3]            ;   4e58ce6 <- [0xdead3008]  r2 = 04e58ce6 
    8AE0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AE4  add     r3, r3, #4          ; r3 = dead3004 
    8AE8  eor     r2, r2, r1          ; r2 = 38346da8 
    8AEC  str     r2, [r3]            ;  [0xdead3004] <- 38346da8  
    8AF0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AF4  add     r3, r3, #8          ; r3 = dead3008 
    8AF8  ldr     r2, [r3]            ;   4e58ce6 <- [0xdead3008]  r2 = 04e58ce6 
    8AFC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B00  add     r3, r3, #8          ; r3 = dead3008 
    8B04  ror     r2, r2, #0x10       ; r2 = 8ce604e5 
    8B08  str     r2, [r3]            ;  [0xdead3008] <- 8ce604e5  
    8B0C  ldr     r3, [fp, #-0x10]    ;         0 <- [0xafffffec]  r3 = 00000000 
    8B10  add     r3, r3, #1          ; r3 = 00000001 
    8B14  str     r3, [fp, #-0x10]    ;  [0xafffffec] <- 1  
    8B18  ldr     r3, [fp, #-0x10]    ;         1 <- [0xafffffec]  r3 = 00000001 
    8B1C  cmp     r3, #0xb            ; cpsr = 800001d3 
    8B20  ble     #0x8944             ; pc = 00008944 
    8944  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8948  ldr     r2, [r3]            ;  b66701e8 <- [0xdead3000]  r2 = b66701e8 
    894C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8950  add     r3, r3, #4          ; r3 = dead3004 
    8954  ldr     r3, [r3]            ;  38346da8 <- [0xdead3004]  r3 = 38346da8 
    8958  add     r2, r2, r3          ; r2 = ee9b6f90 
    895C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8960  str     r2, [r3]            ;  [0xdead3000] <- ee9b6f90  
    8964  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8968  add     r3, r3, #4          ; r3 = dead3004 
    896C  ldr     r2, [r3]            ;  38346da8 <- [0xdead3004]  r2 = 38346da8 
    8970  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8974  add     r3, r3, #4          ; r3 = dead3004 
    8978  ror     r2, r2, #0x1b       ; r2 = 068db507 
    897C  str     r2, [r3]            ;  [0xdead3004] <- 68db507  
    8980  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8984  add     r3, r3, #4          ; r3 = dead3004 
    8988  ldr     r1, [r3]            ;   68db507 <- [0xdead3004]  r1 = 068db507 
    898C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8990  ldr     r2, [r3]            ;  ee9b6f90 <- [0xdead3000]  r2 = ee9b6f90 
    8994  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8998  add     r3, r3, #4          ; r3 = dead3004 
    899C  eor     r2, r2, r1          ; r2 = e816da97 
    89A0  str     r2, [r3]            ;  [0xdead3004] <- e816da97  
    89A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89A8  ldr     r3, [r3]            ;  ee9b6f90 <- [0xdead3000]  r3 = ee9b6f90 
    89AC  ror     r2, r3, #0x10       ; r2 = 6f90ee9b 
    89B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89B4  str     r2, [r3]            ;  [0xdead3000] <- 6f90ee9b  
    89B8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89BC  add     r3, r3, #8          ; r3 = dead3008 
    89C0  ldr     r1, [r3]            ;  8ce604e5 <- [0xdead3008]  r1 = 8ce604e5 
    89C4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89C8  add     r3, r3, #0xc        ; r3 = dead300c 
    89CC  ldr     r2, [r3]            ;  192401e8 <- [0xdead300c]  r2 = 192401e8 
    89D0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89D4  add     r3, r3, #8          ; r3 = dead3008 
    89D8  add     r2, r1, r2          ; r2 = a60a06cd 
    89DC  str     r2, [r3]            ;  [0xdead3008] <- a60a06cd  
    89E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89E4  add     r3, r3, #0xc        ; r3 = dead300c 
    89E8  ldr     r2, [r3]            ;  192401e8 <- [0xdead300c]  r2 = 192401e8 
    89EC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89F0  add     r3, r3, #0xc        ; r3 = dead300c 
    89F4  ror     r2, r2, #0x18       ; r2 = 2401e819 
    89F8  str     r2, [r3]            ;  [0xdead300c] <- 2401e819  
    89FC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A00  add     r3, r3, #0xc        ; r3 = dead300c 
    8A04  ldr     r1, [r3]            ;  2401e819 <- [0xdead300c]  r1 = 2401e819 
    8A08  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A0C  add     r3, r3, #8          ; r3 = dead3008 
    8A10  ldr     r2, [r3]            ;  a60a06cd <- [0xdead3008]  r2 = a60a06cd 
    8A14  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A18  add     r3, r3, #0xc        ; r3 = dead300c 
    8A1C  eor     r2, r2, r1          ; r2 = 820beed4 
    8A20  str     r2, [r3]            ;  [0xdead300c] <- 820beed4  
    8A24  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A28  ldr     r2, [r3]            ;  6f90ee9b <- [0xdead3000]  r2 = 6f90ee9b 
    8A2C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A30  add     r3, r3, #0xc        ; r3 = dead300c 
    8A34  ldr     r3, [r3]            ;  820beed4 <- [0xdead300c]  r3 = 820beed4 
    8A38  add     r2, r2, r3          ; r2 = f19cdd6f 
    8A3C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A40  str     r2, [r3]            ;  [0xdead3000] <- f19cdd6f  
    8A44  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A48  add     r3, r3, #0xc        ; r3 = dead300c 
    8A4C  ldr     r2, [r3]            ;  820beed4 <- [0xdead300c]  r2 = 820beed4 
    8A50  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A54  add     r3, r3, #0xc        ; r3 = dead300c 
    8A58  ror     r2, r2, #0x13       ; r2 = 7dda9041 
    8A5C  str     r2, [r3]            ;  [0xdead300c] <- 7dda9041  
    8A60  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A64  add     r3, r3, #0xc        ; r3 = dead300c 
    8A68  ldr     r1, [r3]            ;  7dda9041 <- [0xdead300c]  r1 = 7dda9041 
    8A6C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A70  ldr     r2, [r3]            ;  f19cdd6f <- [0xdead3000]  r2 = f19cdd6f 
    8A74  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A78  add     r3, r3, #0xc        ; r3 = dead300c 
    8A7C  eor     r2, r2, r1          ; r2 = 8c464d2e 
    8A80  str     r2, [r3]            ;  [0xdead300c] <- 8c464d2e  
    8A84  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A88  add     r3, r3, #8          ; r3 = dead3008 
    8A8C  ldr     r1, [r3]            ;  a60a06cd <- [0xdead3008]  r1 = a60a06cd 
    8A90  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A94  add     r3, r3, #4          ; r3 = dead3004 
    8A98  ldr     r2, [r3]            ;  e816da97 <- [0xdead3004]  r2 = e816da97 
    8A9C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AA0  add     r3, r3, #8          ; r3 = dead3008 
    8AA4  add     r2, r1, r2          ; r2 = 8e20e164 
    8AA8  str     r2, [r3]            ;  [0xdead3008] <- 8e20e164  
    8AAC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AB0  add     r3, r3, #4          ; r3 = dead3004 
    8AB4  ldr     r2, [r3]            ;  e816da97 <- [0xdead3004]  r2 = e816da97 
    8AB8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ABC  add     r3, r3, #4          ; r3 = dead3004 
    8AC0  ror     r2, r2, #0x19       ; r2 = 0b6d4bf4 
    8AC4  str     r2, [r3]            ;  [0xdead3004] <- b6d4bf4  
    8AC8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ACC  add     r3, r3, #4          ; r3 = dead3004 
    8AD0  ldr     r1, [r3]            ;   b6d4bf4 <- [0xdead3004]  r1 = 0b6d4bf4 
    8AD4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AD8  add     r3, r3, #8          ; r3 = dead3008 
    8ADC  ldr     r2, [r3]            ;  8e20e164 <- [0xdead3008]  r2 = 8e20e164 
    8AE0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AE4  add     r3, r3, #4          ; r3 = dead3004 
    8AE8  eor     r2, r2, r1          ; r2 = 854daa90 
    8AEC  str     r2, [r3]            ;  [0xdead3004] <- 854daa90  
    8AF0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AF4  add     r3, r3, #8          ; r3 = dead3008 
    8AF8  ldr     r2, [r3]            ;  8e20e164 <- [0xdead3008]  r2 = 8e20e164 
    8AFC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B00  add     r3, r3, #8          ; r3 = dead3008 
    8B04  ror     r2, r2, #0x10       ; r2 = e1648e20 
    8B08  str     r2, [r3]            ;  [0xdead3008] <- e1648e20  
    8B0C  ldr     r3, [fp, #-0x10]    ;         1 <- [0xafffffec]  r3 = 00000001 
    8B10  add     r3, r3, #1          ; r3 = 00000002 
    8B14  str     r3, [fp, #-0x10]    ;  [0xafffffec] <- 2  
    8B18  ldr     r3, [fp, #-0x10]    ;         2 <- [0xafffffec]  r3 = 00000002 
    8B1C  cmp     r3, #0xb            ; cpsr = 800001d3 
    8B20  ble     #0x8944             ; pc = 00008944 
    8944  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8948  ldr     r2, [r3]            ;  f19cdd6f <- [0xdead3000]  r2 = f19cdd6f 
    894C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8950  add     r3, r3, #4          ; r3 = dead3004 
    8954  ldr     r3, [r3]            ;  854daa90 <- [0xdead3004]  r3 = 854daa90 
    8958  add     r2, r2, r3          ; r2 = 76ea87ff 
    895C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8960  str     r2, [r3]            ;  [0xdead3000] <- 76ea87ff  
    8964  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8968  add     r3, r3, #4          ; r3 = dead3004 
    896C  ldr     r2, [r3]            ;  854daa90 <- [0xdead3004]  r2 = 854daa90 
    8970  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8974  add     r3, r3, #4          ; r3 = dead3004 
    8978  ror     r2, r2, #0x1b       ; r2 = a9b55210 
    897C  str     r2, [r3]            ;  [0xdead3004] <- a9b55210  
    8980  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8984  add     r3, r3, #4          ; r3 = dead3004 
    8988  ldr     r1, [r3]            ;  a9b55210 <- [0xdead3004]  r1 = a9b55210 
    898C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8990  ldr     r2, [r3]            ;  76ea87ff <- [0xdead3000]  r2 = 76ea87ff 
    8994  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8998  add     r3, r3, #4          ; r3 = dead3004 
    899C  eor     r2, r2, r1          ; r2 = df5fd5ef 
    89A0  str     r2, [r3]            ;  [0xdead3004] <- df5fd5ef  
    89A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89A8  ldr     r3, [r3]            ;  76ea87ff <- [0xdead3000]  r3 = 76ea87ff 
    89AC  ror     r2, r3, #0x10       ; r2 = 87ff76ea 
    89B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89B4  str     r2, [r3]            ;  [0xdead3000] <- 87ff76ea  
    89B8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89BC  add     r3, r3, #8          ; r3 = dead3008 
    89C0  ldr     r1, [r3]            ;  e1648e20 <- [0xdead3008]  r1 = e1648e20 
    89C4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89C8  add     r3, r3, #0xc        ; r3 = dead300c 
    89CC  ldr     r2, [r3]            ;  8c464d2e <- [0xdead300c]  r2 = 8c464d2e 
    89D0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89D4  add     r3, r3, #8          ; r3 = dead3008 
    89D8  add     r2, r1, r2          ; r2 = 6daadb4e 
    89DC  str     r2, [r3]            ;  [0xdead3008] <- 6daadb4e  
    89E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89E4  add     r3, r3, #0xc        ; r3 = dead300c 
    89E8  ldr     r2, [r3]            ;  8c464d2e <- [0xdead300c]  r2 = 8c464d2e 
    89EC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89F0  add     r3, r3, #0xc        ; r3 = dead300c 
    89F4  ror     r2, r2, #0x18       ; r2 = 464d2e8c 
    89F8  str     r2, [r3]            ;  [0xdead300c] <- 464d2e8c  
    89FC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A00  add     r3, r3, #0xc        ; r3 = dead300c 
    8A04  ldr     r1, [r3]            ;  464d2e8c <- [0xdead300c]  r1 = 464d2e8c 
    8A08  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A0C  add     r3, r3, #8          ; r3 = dead3008 
    8A10  ldr     r2, [r3]            ;  6daadb4e <- [0xdead3008]  r2 = 6daadb4e 
    8A14  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A18  add     r3, r3, #0xc        ; r3 = dead300c 
    8A1C  eor     r2, r2, r1          ; r2 = 2be7f5c2 
    8A20  str     r2, [r3]            ;  [0xdead300c] <- 2be7f5c2  
    8A24  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A28  ldr     r2, [r3]            ;  87ff76ea <- [0xdead3000]  r2 = 87ff76ea 
    8A2C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A30  add     r3, r3, #0xc        ; r3 = dead300c 
    8A34  ldr     r3, [r3]            ;  2be7f5c2 <- [0xdead300c]  r3 = 2be7f5c2 
    8A38  add     r2, r2, r3          ; r2 = b3e76cac 
    8A3C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A40  str     r2, [r3]            ;  [0xdead3000] <- b3e76cac  
    8A44  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A48  add     r3, r3, #0xc        ; r3 = dead300c 
    8A4C  ldr     r2, [r3]            ;  2be7f5c2 <- [0xdead300c]  r2 = 2be7f5c2 
    8A50  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A54  add     r3, r3, #0xc        ; r3 = dead300c 
    8A58  ror     r2, r2, #0x13       ; r2 = feb8457c 
    8A5C  str     r2, [r3]            ;  [0xdead300c] <- feb8457c  
    8A60  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A64  add     r3, r3, #0xc        ; r3 = dead300c 
    8A68  ldr     r1, [r3]            ;  feb8457c <- [0xdead300c]  r1 = feb8457c 
    8A6C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A70  ldr     r2, [r3]            ;  b3e76cac <- [0xdead3000]  r2 = b3e76cac 
    8A74  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A78  add     r3, r3, #0xc        ; r3 = dead300c 
    8A7C  eor     r2, r2, r1          ; r2 = 4d5f29d0 
    8A80  str     r2, [r3]            ;  [0xdead300c] <- 4d5f29d0  
    8A84  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A88  add     r3, r3, #8          ; r3 = dead3008 
    8A8C  ldr     r1, [r3]            ;  6daadb4e <- [0xdead3008]  r1 = 6daadb4e 
    8A90  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A94  add     r3, r3, #4          ; r3 = dead3004 
    8A98  ldr     r2, [r3]            ;  df5fd5ef <- [0xdead3004]  r2 = df5fd5ef 
    8A9C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AA0  add     r3, r3, #8          ; r3 = dead3008 
    8AA4  add     r2, r1, r2          ; r2 = 4d0ab13d 
    8AA8  str     r2, [r3]            ;  [0xdead3008] <- 4d0ab13d  
    8AAC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AB0  add     r3, r3, #4          ; r3 = dead3004 
    8AB4  ldr     r2, [r3]            ;  df5fd5ef <- [0xdead3004]  r2 = df5fd5ef 
    8AB8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ABC  add     r3, r3, #4          ; r3 = dead3004 
    8AC0  ror     r2, r2, #0x19       ; r2 = afeaf7ef 
    8AC4  str     r2, [r3]            ;  [0xdead3004] <- afeaf7ef  
    8AC8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ACC  add     r3, r3, #4          ; r3 = dead3004 
    8AD0  ldr     r1, [r3]            ;  afeaf7ef <- [0xdead3004]  r1 = afeaf7ef 
    8AD4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AD8  add     r3, r3, #8          ; r3 = dead3008 
    8ADC  ldr     r2, [r3]            ;  4d0ab13d <- [0xdead3008]  r2 = 4d0ab13d 
    8AE0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AE4  add     r3, r3, #4          ; r3 = dead3004 
    8AE8  eor     r2, r2, r1          ; r2 = e2e046d2 
    8AEC  str     r2, [r3]            ;  [0xdead3004] <- e2e046d2  
    8AF0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AF4  add     r3, r3, #8          ; r3 = dead3008 
    8AF8  ldr     r2, [r3]            ;  4d0ab13d <- [0xdead3008]  r2 = 4d0ab13d 
    8AFC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B00  add     r3, r3, #8          ; r3 = dead3008 
    8B04  ror     r2, r2, #0x10       ; r2 = b13d4d0a 
    8B08  str     r2, [r3]            ;  [0xdead3008] <- b13d4d0a  
    8B0C  ldr     r3, [fp, #-0x10]    ;         2 <- [0xafffffec]  r3 = 00000002 
    8B10  add     r3, r3, #1          ; r3 = 00000003 
    8B14  str     r3, [fp, #-0x10]    ;  [0xafffffec] <- 3  
    8B18  ldr     r3, [fp, #-0x10]    ;         3 <- [0xafffffec]  r3 = 00000003 
    8B1C  cmp     r3, #0xb            ; cpsr = 800001d3 
    8B20  ble     #0x8944             ; pc = 00008944 
    8944  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8948  ldr     r2, [r3]            ;  b3e76cac <- [0xdead3000]  r2 = b3e76cac 
    894C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8950  add     r3, r3, #4          ; r3 = dead3004 
    8954  ldr     r3, [r3]            ;  e2e046d2 <- [0xdead3004]  r3 = e2e046d2 
    8958  add     r2, r2, r3          ; r2 = 96c7b37e 
    895C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8960  str     r2, [r3]            ;  [0xdead3000] <- 96c7b37e  
    8964  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8968  add     r3, r3, #4          ; r3 = dead3004 
    896C  ldr     r2, [r3]            ;  e2e046d2 <- [0xdead3004]  r2 = e2e046d2 
    8970  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8974  add     r3, r3, #4          ; r3 = dead3004 
    8978  ror     r2, r2, #0x1b       ; r2 = 5c08da5c 
    897C  str     r2, [r3]            ;  [0xdead3004] <- 5c08da5c  
    8980  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8984  add     r3, r3, #4          ; r3 = dead3004 
    8988  ldr     r1, [r3]            ;  5c08da5c <- [0xdead3004]  r1 = 5c08da5c 
    898C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8990  ldr     r2, [r3]            ;  96c7b37e <- [0xdead3000]  r2 = 96c7b37e 
    8994  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8998  add     r3, r3, #4          ; r3 = dead3004 
    899C  eor     r2, r2, r1          ; r2 = cacf6922 
    89A0  str     r2, [r3]            ;  [0xdead3004] <- cacf6922  
    89A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89A8  ldr     r3, [r3]            ;  96c7b37e <- [0xdead3000]  r3 = 96c7b37e 
    89AC  ror     r2, r3, #0x10       ; r2 = b37e96c7 
    89B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89B4  str     r2, [r3]            ;  [0xdead3000] <- b37e96c7  
    89B8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89BC  add     r3, r3, #8          ; r3 = dead3008 
    89C0  ldr     r1, [r3]            ;  b13d4d0a <- [0xdead3008]  r1 = b13d4d0a 
    89C4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89C8  add     r3, r3, #0xc        ; r3 = dead300c 
    89CC  ldr     r2, [r3]            ;  4d5f29d0 <- [0xdead300c]  r2 = 4d5f29d0 
    89D0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89D4  add     r3, r3, #8          ; r3 = dead3008 
    89D8  add     r2, r1, r2          ; r2 = fe9c76da 
    89DC  str     r2, [r3]            ;  [0xdead3008] <- fe9c76da  
    89E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89E4  add     r3, r3, #0xc        ; r3 = dead300c 
    89E8  ldr     r2, [r3]            ;  4d5f29d0 <- [0xdead300c]  r2 = 4d5f29d0 
    89EC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89F0  add     r3, r3, #0xc        ; r3 = dead300c 
    89F4  ror     r2, r2, #0x18       ; r2 = 5f29d04d 
    89F8  str     r2, [r3]            ;  [0xdead300c] <- 5f29d04d  
    89FC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A00  add     r3, r3, #0xc        ; r3 = dead300c 
    8A04  ldr     r1, [r3]            ;  5f29d04d <- [0xdead300c]  r1 = 5f29d04d 
    8A08  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A0C  add     r3, r3, #8          ; r3 = dead3008 
    8A10  ldr     r2, [r3]            ;  fe9c76da <- [0xdead3008]  r2 = fe9c76da 
    8A14  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A18  add     r3, r3, #0xc        ; r3 = dead300c 
    8A1C  eor     r2, r2, r1          ; r2 = a1b5a697 
    8A20  str     r2, [r3]            ;  [0xdead300c] <- a1b5a697  
    8A24  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A28  ldr     r2, [r3]            ;  b37e96c7 <- [0xdead3000]  r2 = b37e96c7 
    8A2C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A30  add     r3, r3, #0xc        ; r3 = dead300c 
    8A34  ldr     r3, [r3]            ;  a1b5a697 <- [0xdead300c]  r3 = a1b5a697 
    8A38  add     r2, r2, r3          ; r2 = 55343d5e 
    8A3C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A40  str     r2, [r3]            ;  [0xdead3000] <- 55343d5e  
    8A44  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A48  add     r3, r3, #0xc        ; r3 = dead300c 
    8A4C  ldr     r2, [r3]            ;  a1b5a697 <- [0xdead300c]  r2 = a1b5a697 
    8A50  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A54  add     r3, r3, #0xc        ; r3 = dead300c 
    8A58  ror     r2, r2, #0x13       ; r2 = b4d2f436 
    8A5C  str     r2, [r3]            ;  [0xdead300c] <- b4d2f436  
    8A60  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A64  add     r3, r3, #0xc        ; r3 = dead300c 
    8A68  ldr     r1, [r3]            ;  b4d2f436 <- [0xdead300c]  r1 = b4d2f436 
    8A6C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A70  ldr     r2, [r3]            ;  55343d5e <- [0xdead3000]  r2 = 55343d5e 
    8A74  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A78  add     r3, r3, #0xc        ; r3 = dead300c 
    8A7C  eor     r2, r2, r1          ; r2 = e1e6c968 
    8A80  str     r2, [r3]            ;  [0xdead300c] <- e1e6c968  
    8A84  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A88  add     r3, r3, #8          ; r3 = dead3008 
    8A8C  ldr     r1, [r3]            ;  fe9c76da <- [0xdead3008]  r1 = fe9c76da 
    8A90  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A94  add     r3, r3, #4          ; r3 = dead3004 
    8A98  ldr     r2, [r3]            ;  cacf6922 <- [0xdead3004]  r2 = cacf6922 
    8A9C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AA0  add     r3, r3, #8          ; r3 = dead3008 
    8AA4  add     r2, r1, r2          ; r2 = c96bdffc 
    8AA8  str     r2, [r3]            ;  [0xdead3008] <- c96bdffc  
    8AAC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AB0  add     r3, r3, #4          ; r3 = dead3004 
    8AB4  ldr     r2, [r3]            ;  cacf6922 <- [0xdead3004]  r2 = cacf6922 
    8AB8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ABC  add     r3, r3, #4          ; r3 = dead3004 
    8AC0  ror     r2, r2, #0x19       ; r2 = 67b49165 
    8AC4  str     r2, [r3]            ;  [0xdead3004] <- 67b49165  
    8AC8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ACC  add     r3, r3, #4          ; r3 = dead3004 
    8AD0  ldr     r1, [r3]            ;  67b49165 <- [0xdead3004]  r1 = 67b49165 
    8AD4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AD8  add     r3, r3, #8          ; r3 = dead3008 
    8ADC  ldr     r2, [r3]            ;  c96bdffc <- [0xdead3008]  r2 = c96bdffc 
    8AE0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AE4  add     r3, r3, #4          ; r3 = dead3004 
    8AE8  eor     r2, r2, r1          ; r2 = aedf4e99 
    8AEC  str     r2, [r3]            ;  [0xdead3004] <- aedf4e99  
    8AF0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AF4  add     r3, r3, #8          ; r3 = dead3008 
    8AF8  ldr     r2, [r3]            ;  c96bdffc <- [0xdead3008]  r2 = c96bdffc 
    8AFC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B00  add     r3, r3, #8          ; r3 = dead3008 
    8B04  ror     r2, r2, #0x10       ; r2 = dffcc96b 
    8B08  str     r2, [r3]            ;  [0xdead3008] <- dffcc96b  
    8B0C  ldr     r3, [fp, #-0x10]    ;         3 <- [0xafffffec]  r3 = 00000003 
    8B10  add     r3, r3, #1          ; r3 = 00000004 
    8B14  str     r3, [fp, #-0x10]    ;  [0xafffffec] <- 4  
    8B18  ldr     r3, [fp, #-0x10]    ;         4 <- [0xafffffec]  r3 = 00000004 
    8B1C  cmp     r3, #0xb            ; cpsr = 800001d3 
    8B20  ble     #0x8944             ; pc = 00008944 
    8944  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8948  ldr     r2, [r3]            ;  55343d5e <- [0xdead3000]  r2 = 55343d5e 
    894C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8950  add     r3, r3, #4          ; r3 = dead3004 
    8954  ldr     r3, [r3]            ;  aedf4e99 <- [0xdead3004]  r3 = aedf4e99 
    8958  add     r2, r2, r3          ; r2 = 04138bf7 
    895C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8960  str     r2, [r3]            ;  [0xdead3000] <- 4138bf7  
    8964  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8968  add     r3, r3, #4          ; r3 = dead3004 
    896C  ldr     r2, [r3]            ;  aedf4e99 <- [0xdead3004]  r2 = aedf4e99 
    8970  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8974  add     r3, r3, #4          ; r3 = dead3004 
    8978  ror     r2, r2, #0x1b       ; r2 = dbe9d335 
    897C  str     r2, [r3]            ;  [0xdead3004] <- dbe9d335  
    8980  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8984  add     r3, r3, #4          ; r3 = dead3004 
    8988  ldr     r1, [r3]            ;  dbe9d335 <- [0xdead3004]  r1 = dbe9d335 
    898C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8990  ldr     r2, [r3]            ;   4138bf7 <- [0xdead3000]  r2 = 04138bf7 
    8994  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8998  add     r3, r3, #4          ; r3 = dead3004 
    899C  eor     r2, r2, r1          ; r2 = dffa58c2 
    89A0  str     r2, [r3]            ;  [0xdead3004] <- dffa58c2  
    89A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89A8  ldr     r3, [r3]            ;   4138bf7 <- [0xdead3000]  r3 = 04138bf7 
    89AC  ror     r2, r3, #0x10       ; r2 = 8bf70413 
    89B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89B4  str     r2, [r3]            ;  [0xdead3000] <- 8bf70413  
    89B8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89BC  add     r3, r3, #8          ; r3 = dead3008 
    89C0  ldr     r1, [r3]            ;  dffcc96b <- [0xdead3008]  r1 = dffcc96b 
    89C4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89C8  add     r3, r3, #0xc        ; r3 = dead300c 
    89CC  ldr     r2, [r3]            ;  e1e6c968 <- [0xdead300c]  r2 = e1e6c968 
    89D0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89D4  add     r3, r3, #8          ; r3 = dead3008 
    89D8  add     r2, r1, r2          ; r2 = c1e392d3 
    89DC  str     r2, [r3]            ;  [0xdead3008] <- c1e392d3  
    89E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89E4  add     r3, r3, #0xc        ; r3 = dead300c 
    89E8  ldr     r2, [r3]            ;  e1e6c968 <- [0xdead300c]  r2 = e1e6c968 
    89EC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89F0  add     r3, r3, #0xc        ; r3 = dead300c 
    89F4  ror     r2, r2, #0x18       ; r2 = e6c968e1 
    89F8  str     r2, [r3]            ;  [0xdead300c] <- e6c968e1  
    89FC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A00  add     r3, r3, #0xc        ; r3 = dead300c 
    8A04  ldr     r1, [r3]            ;  e6c968e1 <- [0xdead300c]  r1 = e6c968e1 
    8A08  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A0C  add     r3, r3, #8          ; r3 = dead3008 
    8A10  ldr     r2, [r3]            ;  c1e392d3 <- [0xdead3008]  r2 = c1e392d3 
    8A14  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A18  add     r3, r3, #0xc        ; r3 = dead300c 
    8A1C  eor     r2, r2, r1          ; r2 = 272afa32 
    8A20  str     r2, [r3]            ;  [0xdead300c] <- 272afa32  
    8A24  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A28  ldr     r2, [r3]            ;  8bf70413 <- [0xdead3000]  r2 = 8bf70413 
    8A2C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A30  add     r3, r3, #0xc        ; r3 = dead300c 
    8A34  ldr     r3, [r3]            ;  272afa32 <- [0xdead300c]  r3 = 272afa32 
    8A38  add     r2, r2, r3          ; r2 = b321fe45 
    8A3C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A40  str     r2, [r3]            ;  [0xdead3000] <- b321fe45  
    8A44  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A48  add     r3, r3, #0xc        ; r3 = dead300c 
    8A4C  ldr     r2, [r3]            ;  272afa32 <- [0xdead300c]  r2 = 272afa32 
    8A50  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A54  add     r3, r3, #0xc        ; r3 = dead300c 
    8A58  ror     r2, r2, #0x13       ; r2 = 5f4644e5 
    8A5C  str     r2, [r3]            ;  [0xdead300c] <- 5f4644e5  
    8A60  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A64  add     r3, r3, #0xc        ; r3 = dead300c 
    8A68  ldr     r1, [r3]            ;  5f4644e5 <- [0xdead300c]  r1 = 5f4644e5 
    8A6C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A70  ldr     r2, [r3]            ;  b321fe45 <- [0xdead3000]  r2 = b321fe45 
    8A74  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A78  add     r3, r3, #0xc        ; r3 = dead300c 
    8A7C  eor     r2, r2, r1          ; r2 = ec67baa0 
    8A80  str     r2, [r3]            ;  [0xdead300c] <- ec67baa0  
    8A84  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A88  add     r3, r3, #8          ; r3 = dead3008 
    8A8C  ldr     r1, [r3]            ;  c1e392d3 <- [0xdead3008]  r1 = c1e392d3 
    8A90  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A94  add     r3, r3, #4          ; r3 = dead3004 
    8A98  ldr     r2, [r3]            ;  dffa58c2 <- [0xdead3004]  r2 = dffa58c2 
    8A9C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AA0  add     r3, r3, #8          ; r3 = dead3008 
    8AA4  add     r2, r1, r2          ; r2 = a1ddeb95 
    8AA8  str     r2, [r3]            ;  [0xdead3008] <- a1ddeb95  
    8AAC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AB0  add     r3, r3, #4          ; r3 = dead3004 
    8AB4  ldr     r2, [r3]            ;  dffa58c2 <- [0xdead3004]  r2 = dffa58c2 
    8AB8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ABC  add     r3, r3, #4          ; r3 = dead3004 
    8AC0  ror     r2, r2, #0x19       ; r2 = fd2c616f 
    8AC4  str     r2, [r3]            ;  [0xdead3004] <- fd2c616f  
    8AC8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ACC  add     r3, r3, #4          ; r3 = dead3004 
    8AD0  ldr     r1, [r3]            ;  fd2c616f <- [0xdead3004]  r1 = fd2c616f 
    8AD4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AD8  add     r3, r3, #8          ; r3 = dead3008 
    8ADC  ldr     r2, [r3]            ;  a1ddeb95 <- [0xdead3008]  r2 = a1ddeb95 
    8AE0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AE4  add     r3, r3, #4          ; r3 = dead3004 
    8AE8  eor     r2, r2, r1          ; r2 = 5cf18afa 
    8AEC  str     r2, [r3]            ;  [0xdead3004] <- 5cf18afa  
    8AF0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AF4  add     r3, r3, #8          ; r3 = dead3008 
    8AF8  ldr     r2, [r3]            ;  a1ddeb95 <- [0xdead3008]  r2 = a1ddeb95 
    8AFC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B00  add     r3, r3, #8          ; r3 = dead3008 
    8B04  ror     r2, r2, #0x10       ; r2 = eb95a1dd 
    8B08  str     r2, [r3]            ;  [0xdead3008] <- eb95a1dd  
    8B0C  ldr     r3, [fp, #-0x10]    ;         4 <- [0xafffffec]  r3 = 00000004 
    8B10  add     r3, r3, #1          ; r3 = 00000005 
    8B14  str     r3, [fp, #-0x10]    ;  [0xafffffec] <- 5  
    8B18  ldr     r3, [fp, #-0x10]    ;         5 <- [0xafffffec]  r3 = 00000005 
    8B1C  cmp     r3, #0xb            ; cpsr = 800001d3 
    8B20  ble     #0x8944             ; pc = 00008944 
    8944  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8948  ldr     r2, [r3]            ;  b321fe45 <- [0xdead3000]  r2 = b321fe45 
    894C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8950  add     r3, r3, #4          ; r3 = dead3004 
    8954  ldr     r3, [r3]            ;  5cf18afa <- [0xdead3004]  r3 = 5cf18afa 
    8958  add     r2, r2, r3          ; r2 = 1013893f 
    895C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8960  str     r2, [r3]            ;  [0xdead3000] <- 1013893f  
    8964  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8968  add     r3, r3, #4          ; r3 = dead3004 
    896C  ldr     r2, [r3]            ;  5cf18afa <- [0xdead3004]  r2 = 5cf18afa 
    8970  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8974  add     r3, r3, #4          ; r3 = dead3004 
    8978  ror     r2, r2, #0x1b       ; r2 = 9e315f4b 
    897C  str     r2, [r3]            ;  [0xdead3004] <- 9e315f4b  
    8980  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8984  add     r3, r3, #4          ; r3 = dead3004 
    8988  ldr     r1, [r3]            ;  9e315f4b <- [0xdead3004]  r1 = 9e315f4b 
    898C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8990  ldr     r2, [r3]            ;  1013893f <- [0xdead3000]  r2 = 1013893f 
    8994  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8998  add     r3, r3, #4          ; r3 = dead3004 
    899C  eor     r2, r2, r1          ; r2 = 8e22d674 
    89A0  str     r2, [r3]            ;  [0xdead3004] <- 8e22d674  
    89A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89A8  ldr     r3, [r3]            ;  1013893f <- [0xdead3000]  r3 = 1013893f 
    89AC  ror     r2, r3, #0x10       ; r2 = 893f1013 
    89B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89B4  str     r2, [r3]            ;  [0xdead3000] <- 893f1013  
    89B8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89BC  add     r3, r3, #8          ; r3 = dead3008 
    89C0  ldr     r1, [r3]            ;  eb95a1dd <- [0xdead3008]  r1 = eb95a1dd 
    89C4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89C8  add     r3, r3, #0xc        ; r3 = dead300c 
    89CC  ldr     r2, [r3]            ;  ec67baa0 <- [0xdead300c]  r2 = ec67baa0 
    89D0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89D4  add     r3, r3, #8          ; r3 = dead3008 
    89D8  add     r2, r1, r2          ; r2 = d7fd5c7d 
    89DC  str     r2, [r3]            ;  [0xdead3008] <- d7fd5c7d  
    89E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89E4  add     r3, r3, #0xc        ; r3 = dead300c 
    89E8  ldr     r2, [r3]            ;  ec67baa0 <- [0xdead300c]  r2 = ec67baa0 
    89EC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89F0  add     r3, r3, #0xc        ; r3 = dead300c 
    89F4  ror     r2, r2, #0x18       ; r2 = 67baa0ec 
    89F8  str     r2, [r3]            ;  [0xdead300c] <- 67baa0ec  
    89FC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A00  add     r3, r3, #0xc        ; r3 = dead300c 
    8A04  ldr     r1, [r3]            ;  67baa0ec <- [0xdead300c]  r1 = 67baa0ec 
    8A08  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A0C  add     r3, r3, #8          ; r3 = dead3008 
    8A10  ldr     r2, [r3]            ;  d7fd5c7d <- [0xdead3008]  r2 = d7fd5c7d 
    8A14  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A18  add     r3, r3, #0xc        ; r3 = dead300c 
    8A1C  eor     r2, r2, r1          ; r2 = b047fc91 
    8A20  str     r2, [r3]            ;  [0xdead300c] <- b047fc91  
    8A24  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A28  ldr     r2, [r3]            ;  893f1013 <- [0xdead3000]  r2 = 893f1013 
    8A2C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A30  add     r3, r3, #0xc        ; r3 = dead300c 
    8A34  ldr     r3, [r3]            ;  b047fc91 <- [0xdead300c]  r3 = b047fc91 
    8A38  add     r2, r2, r3          ; r2 = 39870ca4 
    8A3C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A40  str     r2, [r3]            ;  [0xdead3000] <- 39870ca4  
    8A44  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A48  add     r3, r3, #0xc        ; r3 = dead300c 
    8A4C  ldr     r2, [r3]            ;  b047fc91 <- [0xdead300c]  r2 = b047fc91 
    8A50  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A54  add     r3, r3, #0xc        ; r3 = dead300c 
    8A58  ror     r2, r2, #0x13       ; r2 = ff923608 
    8A5C  str     r2, [r3]            ;  [0xdead300c] <- ff923608  
    8A60  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A64  add     r3, r3, #0xc        ; r3 = dead300c 
    8A68  ldr     r1, [r3]            ;  ff923608 <- [0xdead300c]  r1 = ff923608 
    8A6C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A70  ldr     r2, [r3]            ;  39870ca4 <- [0xdead3000]  r2 = 39870ca4 
    8A74  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A78  add     r3, r3, #0xc        ; r3 = dead300c 
    8A7C  eor     r2, r2, r1          ; r2 = c6153aac 
    8A80  str     r2, [r3]            ;  [0xdead300c] <- c6153aac  
    8A84  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A88  add     r3, r3, #8          ; r3 = dead3008 
    8A8C  ldr     r1, [r3]            ;  d7fd5c7d <- [0xdead3008]  r1 = d7fd5c7d 
    8A90  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A94  add     r3, r3, #4          ; r3 = dead3004 
    8A98  ldr     r2, [r3]            ;  8e22d674 <- [0xdead3004]  r2 = 8e22d674 
    8A9C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AA0  add     r3, r3, #8          ; r3 = dead3008 
    8AA4  add     r2, r1, r2          ; r2 = 662032f1 
    8AA8  str     r2, [r3]            ;  [0xdead3008] <- 662032f1  
    8AAC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AB0  add     r3, r3, #4          ; r3 = dead3004 
    8AB4  ldr     r2, [r3]            ;  8e22d674 <- [0xdead3004]  r2 = 8e22d674 
    8AB8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ABC  add     r3, r3, #4          ; r3 = dead3004 
    8AC0  ror     r2, r2, #0x19       ; r2 = 116b3a47 
    8AC4  str     r2, [r3]            ;  [0xdead3004] <- 116b3a47  
    8AC8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ACC  add     r3, r3, #4          ; r3 = dead3004 
    8AD0  ldr     r1, [r3]            ;  116b3a47 <- [0xdead3004]  r1 = 116b3a47 
    8AD4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AD8  add     r3, r3, #8          ; r3 = dead3008 
    8ADC  ldr     r2, [r3]            ;  662032f1 <- [0xdead3008]  r2 = 662032f1 
    8AE0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AE4  add     r3, r3, #4          ; r3 = dead3004 
    8AE8  eor     r2, r2, r1          ; r2 = 774b08b6 
    8AEC  str     r2, [r3]            ;  [0xdead3004] <- 774b08b6  
    8AF0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AF4  add     r3, r3, #8          ; r3 = dead3008 
    8AF8  ldr     r2, [r3]            ;  662032f1 <- [0xdead3008]  r2 = 662032f1 
    8AFC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B00  add     r3, r3, #8          ; r3 = dead3008 
    8B04  ror     r2, r2, #0x10       ; r2 = 32f16620 
    8B08  str     r2, [r3]            ;  [0xdead3008] <- 32f16620  
    8B0C  ldr     r3, [fp, #-0x10]    ;         5 <- [0xafffffec]  r3 = 00000005 
    8B10  add     r3, r3, #1          ; r3 = 00000006 
    8B14  str     r3, [fp, #-0x10]    ;  [0xafffffec] <- 6  
    8B18  ldr     r3, [fp, #-0x10]    ;         6 <- [0xafffffec]  r3 = 00000006 
    8B1C  cmp     r3, #0xb            ; cpsr = 800001d3 
    8B20  ble     #0x8944             ; pc = 00008944 
    8944  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8948  ldr     r2, [r3]            ;  39870ca4 <- [0xdead3000]  r2 = 39870ca4 
    894C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8950  add     r3, r3, #4          ; r3 = dead3004 
    8954  ldr     r3, [r3]            ;  774b08b6 <- [0xdead3004]  r3 = 774b08b6 
    8958  add     r2, r2, r3          ; r2 = b0d2155a 
    895C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8960  str     r2, [r3]            ;  [0xdead3000] <- b0d2155a  
    8964  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8968  add     r3, r3, #4          ; r3 = dead3004 
    896C  ldr     r2, [r3]            ;  774b08b6 <- [0xdead3004]  r2 = 774b08b6 
    8970  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8974  add     r3, r3, #4          ; r3 = dead3004 
    8978  ror     r2, r2, #0x1b       ; r2 = e96116ce 
    897C  str     r2, [r3]            ;  [0xdead3004] <- e96116ce  
    8980  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8984  add     r3, r3, #4          ; r3 = dead3004 
    8988  ldr     r1, [r3]            ;  e96116ce <- [0xdead3004]  r1 = e96116ce 
    898C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8990  ldr     r2, [r3]            ;  b0d2155a <- [0xdead3000]  r2 = b0d2155a 
    8994  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8998  add     r3, r3, #4          ; r3 = dead3004 
    899C  eor     r2, r2, r1          ; r2 = 59b30394 
    89A0  str     r2, [r3]            ;  [0xdead3004] <- 59b30394  
    89A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89A8  ldr     r3, [r3]            ;  b0d2155a <- [0xdead3000]  r3 = b0d2155a 
    89AC  ror     r2, r3, #0x10       ; r2 = 155ab0d2 
    89B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89B4  str     r2, [r3]            ;  [0xdead3000] <- 155ab0d2  
    89B8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89BC  add     r3, r3, #8          ; r3 = dead3008 
    89C0  ldr     r1, [r3]            ;  32f16620 <- [0xdead3008]  r1 = 32f16620 
    89C4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89C8  add     r3, r3, #0xc        ; r3 = dead300c 
    89CC  ldr     r2, [r3]            ;  c6153aac <- [0xdead300c]  r2 = c6153aac 
    89D0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89D4  add     r3, r3, #8          ; r3 = dead3008 
    89D8  add     r2, r1, r2          ; r2 = f906a0cc 
    89DC  str     r2, [r3]            ;  [0xdead3008] <- f906a0cc  
    89E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89E4  add     r3, r3, #0xc        ; r3 = dead300c 
    89E8  ldr     r2, [r3]            ;  c6153aac <- [0xdead300c]  r2 = c6153aac 
    89EC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89F0  add     r3, r3, #0xc        ; r3 = dead300c 
    89F4  ror     r2, r2, #0x18       ; r2 = 153aacc6 
    89F8  str     r2, [r3]            ;  [0xdead300c] <- 153aacc6  
    89FC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A00  add     r3, r3, #0xc        ; r3 = dead300c 
    8A04  ldr     r1, [r3]            ;  153aacc6 <- [0xdead300c]  r1 = 153aacc6 
    8A08  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A0C  add     r3, r3, #8          ; r3 = dead3008 
    8A10  ldr     r2, [r3]            ;  f906a0cc <- [0xdead3008]  r2 = f906a0cc 
    8A14  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A18  add     r3, r3, #0xc        ; r3 = dead300c 
    8A1C  eor     r2, r2, r1          ; r2 = ec3c0c0a 
    8A20  str     r2, [r3]            ;  [0xdead300c] <- ec3c0c0a  
    8A24  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A28  ldr     r2, [r3]            ;  155ab0d2 <- [0xdead3000]  r2 = 155ab0d2 
    8A2C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A30  add     r3, r3, #0xc        ; r3 = dead300c 
    8A34  ldr     r3, [r3]            ;  ec3c0c0a <- [0xdead300c]  r3 = ec3c0c0a 
    8A38  add     r2, r2, r3          ; r2 = 0196bcdc 
    8A3C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A40  str     r2, [r3]            ;  [0xdead3000] <- 196bcdc  
    8A44  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A48  add     r3, r3, #0xc        ; r3 = dead300c 
    8A4C  ldr     r2, [r3]            ;  ec3c0c0a <- [0xdead300c]  r2 = ec3c0c0a 
    8A50  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A54  add     r3, r3, #0xc        ; r3 = dead300c 
    8A58  ror     r2, r2, #0x13       ; r2 = 81815d87 
    8A5C  str     r2, [r3]            ;  [0xdead300c] <- 81815d87  
    8A60  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A64  add     r3, r3, #0xc        ; r3 = dead300c 
    8A68  ldr     r1, [r3]            ;  81815d87 <- [0xdead300c]  r1 = 81815d87 
    8A6C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A70  ldr     r2, [r3]            ;   196bcdc <- [0xdead3000]  r2 = 0196bcdc 
    8A74  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A78  add     r3, r3, #0xc        ; r3 = dead300c 
    8A7C  eor     r2, r2, r1          ; r2 = 8017e15b 
    8A80  str     r2, [r3]            ;  [0xdead300c] <- 8017e15b  
    8A84  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A88  add     r3, r3, #8          ; r3 = dead3008 
    8A8C  ldr     r1, [r3]            ;  f906a0cc <- [0xdead3008]  r1 = f906a0cc 
    8A90  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A94  add     r3, r3, #4          ; r3 = dead3004 
    8A98  ldr     r2, [r3]            ;  59b30394 <- [0xdead3004]  r2 = 59b30394 
    8A9C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AA0  add     r3, r3, #8          ; r3 = dead3008 
    8AA4  add     r2, r1, r2          ; r2 = 52b9a460 
    8AA8  str     r2, [r3]            ;  [0xdead3008] <- 52b9a460  
    8AAC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AB0  add     r3, r3, #4          ; r3 = dead3004 
    8AB4  ldr     r2, [r3]            ;  59b30394 <- [0xdead3004]  r2 = 59b30394 
    8AB8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ABC  add     r3, r3, #4          ; r3 = dead3004 
    8AC0  ror     r2, r2, #0x19       ; r2 = d981ca2c 
    8AC4  str     r2, [r3]            ;  [0xdead3004] <- d981ca2c  
    8AC8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ACC  add     r3, r3, #4          ; r3 = dead3004 
    8AD0  ldr     r1, [r3]            ;  d981ca2c <- [0xdead3004]  r1 = d981ca2c 
    8AD4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AD8  add     r3, r3, #8          ; r3 = dead3008 
    8ADC  ldr     r2, [r3]            ;  52b9a460 <- [0xdead3008]  r2 = 52b9a460 
    8AE0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AE4  add     r3, r3, #4          ; r3 = dead3004 
    8AE8  eor     r2, r2, r1          ; r2 = 8b386e4c 
    8AEC  str     r2, [r3]            ;  [0xdead3004] <- 8b386e4c  
    8AF0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AF4  add     r3, r3, #8          ; r3 = dead3008 
    8AF8  ldr     r2, [r3]            ;  52b9a460 <- [0xdead3008]  r2 = 52b9a460 
    8AFC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B00  add     r3, r3, #8          ; r3 = dead3008 
    8B04  ror     r2, r2, #0x10       ; r2 = a46052b9 
    8B08  str     r2, [r3]            ;  [0xdead3008] <- a46052b9  
    8B0C  ldr     r3, [fp, #-0x10]    ;         6 <- [0xafffffec]  r3 = 00000006 
    8B10  add     r3, r3, #1          ; r3 = 00000007 
    8B14  str     r3, [fp, #-0x10]    ;  [0xafffffec] <- 7  
    8B18  ldr     r3, [fp, #-0x10]    ;         7 <- [0xafffffec]  r3 = 00000007 
    8B1C  cmp     r3, #0xb            ; cpsr = 800001d3 
    8B20  ble     #0x8944             ; pc = 00008944 
    8944  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8948  ldr     r2, [r3]            ;   196bcdc <- [0xdead3000]  r2 = 0196bcdc 
    894C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8950  add     r3, r3, #4          ; r3 = dead3004 
    8954  ldr     r3, [r3]            ;  8b386e4c <- [0xdead3004]  r3 = 8b386e4c 
    8958  add     r2, r2, r3          ; r2 = 8ccf2b28 
    895C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8960  str     r2, [r3]            ;  [0xdead3000] <- 8ccf2b28  
    8964  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8968  add     r3, r3, #4          ; r3 = dead3004 
    896C  ldr     r2, [r3]            ;  8b386e4c <- [0xdead3004]  r2 = 8b386e4c 
    8970  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8974  add     r3, r3, #4          ; r3 = dead3004 
    8978  ror     r2, r2, #0x1b       ; r2 = 670dc991 
    897C  str     r2, [r3]            ;  [0xdead3004] <- 670dc991  
    8980  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8984  add     r3, r3, #4          ; r3 = dead3004 
    8988  ldr     r1, [r3]            ;  670dc991 <- [0xdead3004]  r1 = 670dc991 
    898C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8990  ldr     r2, [r3]            ;  8ccf2b28 <- [0xdead3000]  r2 = 8ccf2b28 
    8994  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8998  add     r3, r3, #4          ; r3 = dead3004 
    899C  eor     r2, r2, r1          ; r2 = ebc2e2b9 
    89A0  str     r2, [r3]            ;  [0xdead3004] <- ebc2e2b9  
    89A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89A8  ldr     r3, [r3]            ;  8ccf2b28 <- [0xdead3000]  r3 = 8ccf2b28 
    89AC  ror     r2, r3, #0x10       ; r2 = 2b288ccf 
    89B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89B4  str     r2, [r3]            ;  [0xdead3000] <- 2b288ccf  
    89B8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89BC  add     r3, r3, #8          ; r3 = dead3008 
    89C0  ldr     r1, [r3]            ;  a46052b9 <- [0xdead3008]  r1 = a46052b9 
    89C4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89C8  add     r3, r3, #0xc        ; r3 = dead300c 
    89CC  ldr     r2, [r3]            ;  8017e15b <- [0xdead300c]  r2 = 8017e15b 
    89D0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89D4  add     r3, r3, #8          ; r3 = dead3008 
    89D8  add     r2, r1, r2          ; r2 = 24783414 
    89DC  str     r2, [r3]            ;  [0xdead3008] <- 24783414  
    89E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89E4  add     r3, r3, #0xc        ; r3 = dead300c 
    89E8  ldr     r2, [r3]            ;  8017e15b <- [0xdead300c]  r2 = 8017e15b 
    89EC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89F0  add     r3, r3, #0xc        ; r3 = dead300c 
    89F4  ror     r2, r2, #0x18       ; r2 = 17e15b80 
    89F8  str     r2, [r3]            ;  [0xdead300c] <- 17e15b80  
    89FC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A00  add     r3, r3, #0xc        ; r3 = dead300c 
    8A04  ldr     r1, [r3]            ;  17e15b80 <- [0xdead300c]  r1 = 17e15b80 
    8A08  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A0C  add     r3, r3, #8          ; r3 = dead3008 
    8A10  ldr     r2, [r3]            ;  24783414 <- [0xdead3008]  r2 = 24783414 
    8A14  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A18  add     r3, r3, #0xc        ; r3 = dead300c 
    8A1C  eor     r2, r2, r1          ; r2 = 33996f94 
    8A20  str     r2, [r3]            ;  [0xdead300c] <- 33996f94  
    8A24  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A28  ldr     r2, [r3]            ;  2b288ccf <- [0xdead3000]  r2 = 2b288ccf 
    8A2C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A30  add     r3, r3, #0xc        ; r3 = dead300c 
    8A34  ldr     r3, [r3]            ;  33996f94 <- [0xdead300c]  r3 = 33996f94 
    8A38  add     r2, r2, r3          ; r2 = 5ec1fc63 
    8A3C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A40  str     r2, [r3]            ;  [0xdead3000] <- 5ec1fc63  
    8A44  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A48  add     r3, r3, #0xc        ; r3 = dead300c 
    8A4C  ldr     r2, [r3]            ;  33996f94 <- [0xdead300c]  r2 = 33996f94 
    8A50  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A54  add     r3, r3, #0xc        ; r3 = dead300c 
    8A58  ror     r2, r2, #0x13       ; r2 = 2df28673 
    8A5C  str     r2, [r3]            ;  [0xdead300c] <- 2df28673  
    8A60  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A64  add     r3, r3, #0xc        ; r3 = dead300c 
    8A68  ldr     r1, [r3]            ;  2df28673 <- [0xdead300c]  r1 = 2df28673 
    8A6C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A70  ldr     r2, [r3]            ;  5ec1fc63 <- [0xdead3000]  r2 = 5ec1fc63 
    8A74  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A78  add     r3, r3, #0xc        ; r3 = dead300c 
    8A7C  eor     r2, r2, r1          ; r2 = 73337a10 
    8A80  str     r2, [r3]            ;  [0xdead300c] <- 73337a10  
    8A84  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A88  add     r3, r3, #8          ; r3 = dead3008 
    8A8C  ldr     r1, [r3]            ;  24783414 <- [0xdead3008]  r1 = 24783414 
    8A90  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A94  add     r3, r3, #4          ; r3 = dead3004 
    8A98  ldr     r2, [r3]            ;  ebc2e2b9 <- [0xdead3004]  r2 = ebc2e2b9 
    8A9C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AA0  add     r3, r3, #8          ; r3 = dead3008 
    8AA4  add     r2, r1, r2          ; r2 = 103b16cd 
    8AA8  str     r2, [r3]            ;  [0xdead3008] <- 103b16cd  
    8AAC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AB0  add     r3, r3, #4          ; r3 = dead3004 
    8AB4  ldr     r2, [r3]            ;  ebc2e2b9 <- [0xdead3004]  r2 = ebc2e2b9 
    8AB8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ABC  add     r3, r3, #4          ; r3 = dead3004 
    8AC0  ror     r2, r2, #0x19       ; r2 = e1715cf5 
    8AC4  str     r2, [r3]            ;  [0xdead3004] <- e1715cf5  
    8AC8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ACC  add     r3, r3, #4          ; r3 = dead3004 
    8AD0  ldr     r1, [r3]            ;  e1715cf5 <- [0xdead3004]  r1 = e1715cf5 
    8AD4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AD8  add     r3, r3, #8          ; r3 = dead3008 
    8ADC  ldr     r2, [r3]            ;  103b16cd <- [0xdead3008]  r2 = 103b16cd 
    8AE0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AE4  add     r3, r3, #4          ; r3 = dead3004 
    8AE8  eor     r2, r2, r1          ; r2 = f14a4a38 
    8AEC  str     r2, [r3]            ;  [0xdead3004] <- f14a4a38  
    8AF0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AF4  add     r3, r3, #8          ; r3 = dead3008 
    8AF8  ldr     r2, [r3]            ;  103b16cd <- [0xdead3008]  r2 = 103b16cd 
    8AFC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B00  add     r3, r3, #8          ; r3 = dead3008 
    8B04  ror     r2, r2, #0x10       ; r2 = 16cd103b 
    8B08  str     r2, [r3]            ;  [0xdead3008] <- 16cd103b  
    8B0C  ldr     r3, [fp, #-0x10]    ;         7 <- [0xafffffec]  r3 = 00000007 
    8B10  add     r3, r3, #1          ; r3 = 00000008 
    8B14  str     r3, [fp, #-0x10]    ;  [0xafffffec] <- 8  
    8B18  ldr     r3, [fp, #-0x10]    ;         8 <- [0xafffffec]  r3 = 00000008 
    8B1C  cmp     r3, #0xb            ; cpsr = 800001d3 
    8B20  ble     #0x8944             ; pc = 00008944 
    8944  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8948  ldr     r2, [r3]            ;  5ec1fc63 <- [0xdead3000]  r2 = 5ec1fc63 
    894C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8950  add     r3, r3, #4          ; r3 = dead3004 
    8954  ldr     r3, [r3]            ;  f14a4a38 <- [0xdead3004]  r3 = f14a4a38 
    8958  add     r2, r2, r3          ; r2 = 500c469b 
    895C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8960  str     r2, [r3]            ;  [0xdead3000] <- 500c469b  
    8964  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8968  add     r3, r3, #4          ; r3 = dead3004 
    896C  ldr     r2, [r3]            ;  f14a4a38 <- [0xdead3004]  r2 = f14a4a38 
    8970  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8974  add     r3, r3, #4          ; r3 = dead3004 
    8978  ror     r2, r2, #0x1b       ; r2 = 2949471e 
    897C  str     r2, [r3]            ;  [0xdead3004] <- 2949471e  
    8980  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8984  add     r3, r3, #4          ; r3 = dead3004 
    8988  ldr     r1, [r3]            ;  2949471e <- [0xdead3004]  r1 = 2949471e 
    898C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8990  ldr     r2, [r3]            ;  500c469b <- [0xdead3000]  r2 = 500c469b 
    8994  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8998  add     r3, r3, #4          ; r3 = dead3004 
    899C  eor     r2, r2, r1          ; r2 = 79450185 
    89A0  str     r2, [r3]            ;  [0xdead3004] <- 79450185  
    89A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89A8  ldr     r3, [r3]            ;  500c469b <- [0xdead3000]  r3 = 500c469b 
    89AC  ror     r2, r3, #0x10       ; r2 = 469b500c 
    89B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89B4  str     r2, [r3]            ;  [0xdead3000] <- 469b500c  
    89B8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89BC  add     r3, r3, #8          ; r3 = dead3008 
    89C0  ldr     r1, [r3]            ;  16cd103b <- [0xdead3008]  r1 = 16cd103b 
    89C4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89C8  add     r3, r3, #0xc        ; r3 = dead300c 
    89CC  ldr     r2, [r3]            ;  73337a10 <- [0xdead300c]  r2 = 73337a10 
    89D0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89D4  add     r3, r3, #8          ; r3 = dead3008 
    89D8  add     r2, r1, r2          ; r2 = 8a008a4b 
    89DC  str     r2, [r3]            ;  [0xdead3008] <- 8a008a4b  
    89E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89E4  add     r3, r3, #0xc        ; r3 = dead300c 
    89E8  ldr     r2, [r3]            ;  73337a10 <- [0xdead300c]  r2 = 73337a10 
    89EC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89F0  add     r3, r3, #0xc        ; r3 = dead300c 
    89F4  ror     r2, r2, #0x18       ; r2 = 337a1073 
    89F8  str     r2, [r3]            ;  [0xdead300c] <- 337a1073  
    89FC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A00  add     r3, r3, #0xc        ; r3 = dead300c 
    8A04  ldr     r1, [r3]            ;  337a1073 <- [0xdead300c]  r1 = 337a1073 
    8A08  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A0C  add     r3, r3, #8          ; r3 = dead3008 
    8A10  ldr     r2, [r3]            ;  8a008a4b <- [0xdead3008]  r2 = 8a008a4b 
    8A14  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A18  add     r3, r3, #0xc        ; r3 = dead300c 
    8A1C  eor     r2, r2, r1          ; r2 = b97a9a38 
    8A20  str     r2, [r3]            ;  [0xdead300c] <- b97a9a38  
    8A24  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A28  ldr     r2, [r3]            ;  469b500c <- [0xdead3000]  r2 = 469b500c 
    8A2C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A30  add     r3, r3, #0xc        ; r3 = dead300c 
    8A34  ldr     r3, [r3]            ;  b97a9a38 <- [0xdead300c]  r3 = b97a9a38 
    8A38  add     r2, r2, r3          ; r2 = 0015ea44 
    8A3C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A40  str     r2, [r3]            ;  [0xdead3000] <- 15ea44  
    8A44  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A48  add     r3, r3, #0xc        ; r3 = dead300c 
    8A4C  ldr     r2, [r3]            ;  b97a9a38 <- [0xdead300c]  r2 = b97a9a38 
    8A50  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A54  add     r3, r3, #0xc        ; r3 = dead300c 
    8A58  ror     r2, r2, #0x13       ; r2 = 5347172f 
    8A5C  str     r2, [r3]            ;  [0xdead300c] <- 5347172f  
    8A60  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A64  add     r3, r3, #0xc        ; r3 = dead300c 
    8A68  ldr     r1, [r3]            ;  5347172f <- [0xdead300c]  r1 = 5347172f 
    8A6C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A70  ldr     r2, [r3]            ;    15ea44 <- [0xdead3000]  r2 = 0015ea44 
    8A74  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A78  add     r3, r3, #0xc        ; r3 = dead300c 
    8A7C  eor     r2, r2, r1          ; r2 = 5352fd6b 
    8A80  str     r2, [r3]            ;  [0xdead300c] <- 5352fd6b  
    8A84  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A88  add     r3, r3, #8          ; r3 = dead3008 
    8A8C  ldr     r1, [r3]            ;  8a008a4b <- [0xdead3008]  r1 = 8a008a4b 
    8A90  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A94  add     r3, r3, #4          ; r3 = dead3004 
    8A98  ldr     r2, [r3]            ;  79450185 <- [0xdead3004]  r2 = 79450185 
    8A9C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AA0  add     r3, r3, #8          ; r3 = dead3008 
    8AA4  add     r2, r1, r2          ; r2 = 03458bd0 
    8AA8  str     r2, [r3]            ;  [0xdead3008] <- 3458bd0  
    8AAC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AB0  add     r3, r3, #4          ; r3 = dead3004 
    8AB4  ldr     r2, [r3]            ;  79450185 <- [0xdead3004]  r2 = 79450185 
    8AB8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ABC  add     r3, r3, #4          ; r3 = dead3004 
    8AC0  ror     r2, r2, #0x19       ; r2 = a280c2bc 
    8AC4  str     r2, [r3]            ;  [0xdead3004] <- a280c2bc  
    8AC8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ACC  add     r3, r3, #4          ; r3 = dead3004 
    8AD0  ldr     r1, [r3]            ;  a280c2bc <- [0xdead3004]  r1 = a280c2bc 
    8AD4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AD8  add     r3, r3, #8          ; r3 = dead3008 
    8ADC  ldr     r2, [r3]            ;   3458bd0 <- [0xdead3008]  r2 = 03458bd0 
    8AE0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AE4  add     r3, r3, #4          ; r3 = dead3004 
    8AE8  eor     r2, r2, r1          ; r2 = a1c5496c 
    8AEC  str     r2, [r3]            ;  [0xdead3004] <- a1c5496c  
    8AF0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AF4  add     r3, r3, #8          ; r3 = dead3008 
    8AF8  ldr     r2, [r3]            ;   3458bd0 <- [0xdead3008]  r2 = 03458bd0 
    8AFC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B00  add     r3, r3, #8          ; r3 = dead3008 
    8B04  ror     r2, r2, #0x10       ; r2 = 8bd00345 
    8B08  str     r2, [r3]            ;  [0xdead3008] <- 8bd00345  
    8B0C  ldr     r3, [fp, #-0x10]    ;         8 <- [0xafffffec]  r3 = 00000008 
    8B10  add     r3, r3, #1          ; r3 = 00000009 
    8B14  str     r3, [fp, #-0x10]    ;  [0xafffffec] <- 9  
    8B18  ldr     r3, [fp, #-0x10]    ;         9 <- [0xafffffec]  r3 = 00000009 
    8B1C  cmp     r3, #0xb            ; cpsr = 800001d3 
    8B20  ble     #0x8944             ; pc = 00008944 
    8944  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8948  ldr     r2, [r3]            ;    15ea44 <- [0xdead3000]  r2 = 0015ea44 
    894C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8950  add     r3, r3, #4          ; r3 = dead3004 
    8954  ldr     r3, [r3]            ;  a1c5496c <- [0xdead3004]  r3 = a1c5496c 
    8958  add     r2, r2, r3          ; r2 = a1db33b0 
    895C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8960  str     r2, [r3]            ;  [0xdead3000] <- a1db33b0  
    8964  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8968  add     r3, r3, #4          ; r3 = dead3004 
    896C  ldr     r2, [r3]            ;  a1c5496c <- [0xdead3004]  r2 = a1c5496c 
    8970  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8974  add     r3, r3, #4          ; r3 = dead3004 
    8978  ror     r2, r2, #0x1b       ; r2 = 38a92d94 
    897C  str     r2, [r3]            ;  [0xdead3004] <- 38a92d94  
    8980  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8984  add     r3, r3, #4          ; r3 = dead3004 
    8988  ldr     r1, [r3]            ;  38a92d94 <- [0xdead3004]  r1 = 38a92d94 
    898C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8990  ldr     r2, [r3]            ;  a1db33b0 <- [0xdead3000]  r2 = a1db33b0 
    8994  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8998  add     r3, r3, #4          ; r3 = dead3004 
    899C  eor     r2, r2, r1          ; r2 = 99721e24 
    89A0  str     r2, [r3]            ;  [0xdead3004] <- 99721e24  
    89A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89A8  ldr     r3, [r3]            ;  a1db33b0 <- [0xdead3000]  r3 = a1db33b0 
    89AC  ror     r2, r3, #0x10       ; r2 = 33b0a1db 
    89B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89B4  str     r2, [r3]            ;  [0xdead3000] <- 33b0a1db  
    89B8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89BC  add     r3, r3, #8          ; r3 = dead3008 
    89C0  ldr     r1, [r3]            ;  8bd00345 <- [0xdead3008]  r1 = 8bd00345 
    89C4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89C8  add     r3, r3, #0xc        ; r3 = dead300c 
    89CC  ldr     r2, [r3]            ;  5352fd6b <- [0xdead300c]  r2 = 5352fd6b 
    89D0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89D4  add     r3, r3, #8          ; r3 = dead3008 
    89D8  add     r2, r1, r2          ; r2 = df2300b0 
    89DC  str     r2, [r3]            ;  [0xdead3008] <- df2300b0  
    89E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89E4  add     r3, r3, #0xc        ; r3 = dead300c 
    89E8  ldr     r2, [r3]            ;  5352fd6b <- [0xdead300c]  r2 = 5352fd6b 
    89EC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89F0  add     r3, r3, #0xc        ; r3 = dead300c 
    89F4  ror     r2, r2, #0x18       ; r2 = 52fd6b53 
    89F8  str     r2, [r3]            ;  [0xdead300c] <- 52fd6b53  
    89FC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A00  add     r3, r3, #0xc        ; r3 = dead300c 
    8A04  ldr     r1, [r3]            ;  52fd6b53 <- [0xdead300c]  r1 = 52fd6b53 
    8A08  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A0C  add     r3, r3, #8          ; r3 = dead3008 
    8A10  ldr     r2, [r3]            ;  df2300b0 <- [0xdead3008]  r2 = df2300b0 
    8A14  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A18  add     r3, r3, #0xc        ; r3 = dead300c 
    8A1C  eor     r2, r2, r1          ; r2 = 8dde6be3 
    8A20  str     r2, [r3]            ;  [0xdead300c] <- 8dde6be3  
    8A24  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A28  ldr     r2, [r3]            ;  33b0a1db <- [0xdead3000]  r2 = 33b0a1db 
    8A2C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A30  add     r3, r3, #0xc        ; r3 = dead300c 
    8A34  ldr     r3, [r3]            ;  8dde6be3 <- [0xdead300c]  r3 = 8dde6be3 
    8A38  add     r2, r2, r3          ; r2 = c18f0dbe 
    8A3C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A40  str     r2, [r3]            ;  [0xdead3000] <- c18f0dbe  
    8A44  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A48  add     r3, r3, #0xc        ; r3 = dead300c 
    8A4C  ldr     r2, [r3]            ;  8dde6be3 <- [0xdead300c]  r2 = 8dde6be3 
    8A50  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A54  add     r3, r3, #0xc        ; r3 = dead300c 
    8A58  ror     r2, r2, #0x13       ; r2 = cd7c71bb 
    8A5C  str     r2, [r3]            ;  [0xdead300c] <- cd7c71bb  
    8A60  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A64  add     r3, r3, #0xc        ; r3 = dead300c 
    8A68  ldr     r1, [r3]            ;  cd7c71bb <- [0xdead300c]  r1 = cd7c71bb 
    8A6C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A70  ldr     r2, [r3]            ;  c18f0dbe <- [0xdead3000]  r2 = c18f0dbe 
    8A74  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A78  add     r3, r3, #0xc        ; r3 = dead300c 
    8A7C  eor     r2, r2, r1          ; r2 = 0cf37c05 
    8A80  str     r2, [r3]            ;  [0xdead300c] <- cf37c05  
    8A84  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A88  add     r3, r3, #8          ; r3 = dead3008 
    8A8C  ldr     r1, [r3]            ;  df2300b0 <- [0xdead3008]  r1 = df2300b0 
    8A90  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A94  add     r3, r3, #4          ; r3 = dead3004 
    8A98  ldr     r2, [r3]            ;  99721e24 <- [0xdead3004]  r2 = 99721e24 
    8A9C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AA0  add     r3, r3, #8          ; r3 = dead3008 
    8AA4  add     r2, r1, r2          ; r2 = 78951ed4 
    8AA8  str     r2, [r3]            ;  [0xdead3008] <- 78951ed4  
    8AAC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AB0  add     r3, r3, #4          ; r3 = dead3004 
    8AB4  ldr     r2, [r3]            ;  99721e24 <- [0xdead3004]  r2 = 99721e24 
    8AB8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ABC  add     r3, r3, #4          ; r3 = dead3004 
    8AC0  ror     r2, r2, #0x19       ; r2 = b90f124c 
    8AC4  str     r2, [r3]            ;  [0xdead3004] <- b90f124c  
    8AC8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ACC  add     r3, r3, #4          ; r3 = dead3004 
    8AD0  ldr     r1, [r3]            ;  b90f124c <- [0xdead3004]  r1 = b90f124c 
    8AD4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AD8  add     r3, r3, #8          ; r3 = dead3008 
    8ADC  ldr     r2, [r3]            ;  78951ed4 <- [0xdead3008]  r2 = 78951ed4 
    8AE0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AE4  add     r3, r3, #4          ; r3 = dead3004 
    8AE8  eor     r2, r2, r1          ; r2 = c19a0c98 
    8AEC  str     r2, [r3]            ;  [0xdead3004] <- c19a0c98  
    8AF0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AF4  add     r3, r3, #8          ; r3 = dead3008 
    8AF8  ldr     r2, [r3]            ;  78951ed4 <- [0xdead3008]  r2 = 78951ed4 
    8AFC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B00  add     r3, r3, #8          ; r3 = dead3008 
    8B04  ror     r2, r2, #0x10       ; r2 = 1ed47895 
    8B08  str     r2, [r3]            ;  [0xdead3008] <- 1ed47895  
    8B0C  ldr     r3, [fp, #-0x10]    ;         9 <- [0xafffffec]  r3 = 00000009 
    8B10  add     r3, r3, #1          ; r3 = 0000000a 
    8B14  str     r3, [fp, #-0x10]    ;  [0xafffffec] <- a  
    8B18  ldr     r3, [fp, #-0x10]    ;         a <- [0xafffffec]  r3 = 0000000a 
    8B1C  cmp     r3, #0xb            ; cpsr = 800001d3 
    8B20  ble     #0x8944             ; pc = 00008944 
    8944  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8948  ldr     r2, [r3]            ;  c18f0dbe <- [0xdead3000]  r2 = c18f0dbe 
    894C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8950  add     r3, r3, #4          ; r3 = dead3004 
    8954  ldr     r3, [r3]            ;  c19a0c98 <- [0xdead3004]  r3 = c19a0c98 
    8958  add     r2, r2, r3          ; r2 = 83291a56 
    895C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8960  str     r2, [r3]            ;  [0xdead3000] <- 83291a56  
    8964  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8968  add     r3, r3, #4          ; r3 = dead3004 
    896C  ldr     r2, [r3]            ;  c19a0c98 <- [0xdead3004]  r2 = c19a0c98 
    8970  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8974  add     r3, r3, #4          ; r3 = dead3004 
    8978  ror     r2, r2, #0x1b       ; r2 = 33419318 
    897C  str     r2, [r3]            ;  [0xdead3004] <- 33419318  
    8980  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8984  add     r3, r3, #4          ; r3 = dead3004 
    8988  ldr     r1, [r3]            ;  33419318 <- [0xdead3004]  r1 = 33419318 
    898C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8990  ldr     r2, [r3]            ;  83291a56 <- [0xdead3000]  r2 = 83291a56 
    8994  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8998  add     r3, r3, #4          ; r3 = dead3004 
    899C  eor     r2, r2, r1          ; r2 = b068894e 
    89A0  str     r2, [r3]            ;  [0xdead3004] <- b068894e  
    89A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89A8  ldr     r3, [r3]            ;  83291a56 <- [0xdead3000]  r3 = 83291a56 
    89AC  ror     r2, r3, #0x10       ; r2 = 1a568329 
    89B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89B4  str     r2, [r3]            ;  [0xdead3000] <- 1a568329  
    89B8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89BC  add     r3, r3, #8          ; r3 = dead3008 
    89C0  ldr     r1, [r3]            ;  1ed47895 <- [0xdead3008]  r1 = 1ed47895 
    89C4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89C8  add     r3, r3, #0xc        ; r3 = dead300c 
    89CC  ldr     r2, [r3]            ;   cf37c05 <- [0xdead300c]  r2 = 0cf37c05 
    89D0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89D4  add     r3, r3, #8          ; r3 = dead3008 
    89D8  add     r2, r1, r2          ; r2 = 2bc7f49a 
    89DC  str     r2, [r3]            ;  [0xdead3008] <- 2bc7f49a  
    89E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89E4  add     r3, r3, #0xc        ; r3 = dead300c 
    89E8  ldr     r2, [r3]            ;   cf37c05 <- [0xdead300c]  r2 = 0cf37c05 
    89EC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89F0  add     r3, r3, #0xc        ; r3 = dead300c 
    89F4  ror     r2, r2, #0x18       ; r2 = f37c050c 
    89F8  str     r2, [r3]            ;  [0xdead300c] <- f37c050c  
    89FC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A00  add     r3, r3, #0xc        ; r3 = dead300c 
    8A04  ldr     r1, [r3]            ;  f37c050c <- [0xdead300c]  r1 = f37c050c 
    8A08  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A0C  add     r3, r3, #8          ; r3 = dead3008 
    8A10  ldr     r2, [r3]            ;  2bc7f49a <- [0xdead3008]  r2 = 2bc7f49a 
    8A14  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A18  add     r3, r3, #0xc        ; r3 = dead300c 
    8A1C  eor     r2, r2, r1          ; r2 = d8bbf196 
    8A20  str     r2, [r3]            ;  [0xdead300c] <- d8bbf196  
    8A24  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A28  ldr     r2, [r3]            ;  1a568329 <- [0xdead3000]  r2 = 1a568329 
    8A2C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A30  add     r3, r3, #0xc        ; r3 = dead300c 
    8A34  ldr     r3, [r3]            ;  d8bbf196 <- [0xdead300c]  r3 = d8bbf196 
    8A38  add     r2, r2, r3          ; r2 = f31274bf 
    8A3C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A40  str     r2, [r3]            ;  [0xdead3000] <- f31274bf  
    8A44  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A48  add     r3, r3, #0xc        ; r3 = dead300c 
    8A4C  ldr     r2, [r3]            ;  d8bbf196 <- [0xdead300c]  r2 = d8bbf196 
    8A50  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A54  add     r3, r3, #0xc        ; r3 = dead300c 
    8A58  ror     r2, r2, #0x13       ; r2 = 7e32db17 
    8A5C  str     r2, [r3]            ;  [0xdead300c] <- 7e32db17  
    8A60  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A64  add     r3, r3, #0xc        ; r3 = dead300c 
    8A68  ldr     r1, [r3]            ;  7e32db17 <- [0xdead300c]  r1 = 7e32db17 
    8A6C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A70  ldr     r2, [r3]            ;  f31274bf <- [0xdead3000]  r2 = f31274bf 
    8A74  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A78  add     r3, r3, #0xc        ; r3 = dead300c 
    8A7C  eor     r2, r2, r1          ; r2 = 8d20afa8 
    8A80  str     r2, [r3]            ;  [0xdead300c] <- 8d20afa8  
    8A84  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A88  add     r3, r3, #8          ; r3 = dead3008 
    8A8C  ldr     r1, [r3]            ;  2bc7f49a <- [0xdead3008]  r1 = 2bc7f49a 
    8A90  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A94  add     r3, r3, #4          ; r3 = dead3004 
    8A98  ldr     r2, [r3]            ;  b068894e <- [0xdead3004]  r2 = b068894e 
    8A9C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AA0  add     r3, r3, #8          ; r3 = dead3008 
    8AA4  add     r2, r1, r2          ; r2 = dc307de8 
    8AA8  str     r2, [r3]            ;  [0xdead3008] <- dc307de8  
    8AAC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AB0  add     r3, r3, #4          ; r3 = dead3004 
    8AB4  ldr     r2, [r3]            ;  b068894e <- [0xdead3004]  r2 = b068894e 
    8AB8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ABC  add     r3, r3, #4          ; r3 = dead3004 
    8AC0  ror     r2, r2, #0x19       ; r2 = 3444a758 
    8AC4  str     r2, [r3]            ;  [0xdead3004] <- 3444a758  
    8AC8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ACC  add     r3, r3, #4          ; r3 = dead3004 
    8AD0  ldr     r1, [r3]            ;  3444a758 <- [0xdead3004]  r1 = 3444a758 
    8AD4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AD8  add     r3, r3, #8          ; r3 = dead3008 
    8ADC  ldr     r2, [r3]            ;  dc307de8 <- [0xdead3008]  r2 = dc307de8 
    8AE0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AE4  add     r3, r3, #4          ; r3 = dead3004 
    8AE8  eor     r2, r2, r1          ; r2 = e874dab0 
    8AEC  str     r2, [r3]            ;  [0xdead3004] <- e874dab0  
    8AF0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AF4  add     r3, r3, #8          ; r3 = dead3008 
    8AF8  ldr     r2, [r3]            ;  dc307de8 <- [0xdead3008]  r2 = dc307de8 
    8AFC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B00  add     r3, r3, #8          ; r3 = dead3008 
    8B04  ror     r2, r2, #0x10       ; r2 = 7de8dc30 
    8B08  str     r2, [r3]            ;  [0xdead3008] <- 7de8dc30  
    8B0C  ldr     r3, [fp, #-0x10]    ;         a <- [0xafffffec]  r3 = 0000000a 
    8B10  add     r3, r3, #1          ; r3 = 0000000b 
    8B14  str     r3, [fp, #-0x10]    ;  [0xafffffec] <- b  
    8B18  ldr     r3, [fp, #-0x10]    ;         b <- [0xafffffec]  r3 = 0000000b 
    8B1C  cmp     r3, #0xb            ; cpsr = 600001d3 
    8B20  ble     #0x8944             ; pc = 00008944 
    8944  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8948  ldr     r2, [r3]            ;  f31274bf <- [0xdead3000]  r2 = f31274bf 
    894C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8950  add     r3, r3, #4          ; r3 = dead3004 
    8954  ldr     r3, [r3]            ;  e874dab0 <- [0xdead3004]  r3 = e874dab0 
    8958  add     r2, r2, r3          ; r2 = db874f6f 
    895C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8960  str     r2, [r3]            ;  [0xdead3000] <- db874f6f  
    8964  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8968  add     r3, r3, #4          ; r3 = dead3004 
    896C  ldr     r2, [r3]            ;  e874dab0 <- [0xdead3004]  r2 = e874dab0 
    8970  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8974  add     r3, r3, #4          ; r3 = dead3004 
    8978  ror     r2, r2, #0x1b       ; r2 = 0e9b561d 
    897C  str     r2, [r3]            ;  [0xdead3004] <- e9b561d  
    8980  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8984  add     r3, r3, #4          ; r3 = dead3004 
    8988  ldr     r1, [r3]            ;   e9b561d <- [0xdead3004]  r1 = 0e9b561d 
    898C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8990  ldr     r2, [r3]            ;  db874f6f <- [0xdead3000]  r2 = db874f6f 
    8994  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8998  add     r3, r3, #4          ; r3 = dead3004 
    899C  eor     r2, r2, r1          ; r2 = d51c1972 
    89A0  str     r2, [r3]            ;  [0xdead3004] <- d51c1972  
    89A4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89A8  ldr     r3, [r3]            ;  db874f6f <- [0xdead3000]  r3 = db874f6f 
    89AC  ror     r2, r3, #0x10       ; r2 = 4f6fdb87 
    89B0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89B4  str     r2, [r3]            ;  [0xdead3000] <- 4f6fdb87  
    89B8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89BC  add     r3, r3, #8          ; r3 = dead3008 
    89C0  ldr     r1, [r3]            ;  7de8dc30 <- [0xdead3008]  r1 = 7de8dc30 
    89C4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89C8  add     r3, r3, #0xc        ; r3 = dead300c 
    89CC  ldr     r2, [r3]            ;  8d20afa8 <- [0xdead300c]  r2 = 8d20afa8 
    89D0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89D4  add     r3, r3, #8          ; r3 = dead3008 
    89D8  add     r2, r1, r2          ; r2 = 0b098bd8 
    89DC  str     r2, [r3]            ;  [0xdead3008] <- b098bd8  
    89E0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89E4  add     r3, r3, #0xc        ; r3 = dead300c 
    89E8  ldr     r2, [r3]            ;  8d20afa8 <- [0xdead300c]  r2 = 8d20afa8 
    89EC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    89F0  add     r3, r3, #0xc        ; r3 = dead300c 
    89F4  ror     r2, r2, #0x18       ; r2 = 20afa88d 
    89F8  str     r2, [r3]            ;  [0xdead300c] <- 20afa88d  
    89FC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A00  add     r3, r3, #0xc        ; r3 = dead300c 
    8A04  ldr     r1, [r3]            ;  20afa88d <- [0xdead300c]  r1 = 20afa88d 
    8A08  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A0C  add     r3, r3, #8          ; r3 = dead3008 
    8A10  ldr     r2, [r3]            ;   b098bd8 <- [0xdead3008]  r2 = 0b098bd8 
    8A14  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A18  add     r3, r3, #0xc        ; r3 = dead300c 
    8A1C  eor     r2, r2, r1          ; r2 = 2ba62355 
    8A20  str     r2, [r3]            ;  [0xdead300c] <- 2ba62355  
    8A24  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A28  ldr     r2, [r3]            ;  4f6fdb87 <- [0xdead3000]  r2 = 4f6fdb87 
    8A2C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A30  add     r3, r3, #0xc        ; r3 = dead300c 
    8A34  ldr     r3, [r3]            ;  2ba62355 <- [0xdead300c]  r3 = 2ba62355 
    8A38  add     r2, r2, r3          ; r2 = 7b15fedc 
    8A3C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A40  str     r2, [r3]            ;  [0xdead3000] <- 7b15fedc  
    8A44  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A48  add     r3, r3, #0xc        ; r3 = dead300c 
    8A4C  ldr     r2, [r3]            ;  2ba62355 <- [0xdead300c]  r2 = 2ba62355 
    8A50  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A54  add     r3, r3, #0xc        ; r3 = dead300c 
    8A58  ror     r2, r2, #0x13       ; r2 = c46aa574 
    8A5C  str     r2, [r3]            ;  [0xdead300c] <- c46aa574  
    8A60  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A64  add     r3, r3, #0xc        ; r3 = dead300c 
    8A68  ldr     r1, [r3]            ;  c46aa574 <- [0xdead300c]  r1 = c46aa574 
    8A6C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A70  ldr     r2, [r3]            ;  7b15fedc <- [0xdead3000]  r2 = 7b15fedc 
    8A74  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A78  add     r3, r3, #0xc        ; r3 = dead300c 
    8A7C  eor     r2, r2, r1          ; r2 = bf7f5ba8 
    8A80  str     r2, [r3]            ;  [0xdead300c] <- bf7f5ba8  
    8A84  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A88  add     r3, r3, #8          ; r3 = dead3008 
    8A8C  ldr     r1, [r3]            ;   b098bd8 <- [0xdead3008]  r1 = 0b098bd8 
    8A90  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8A94  add     r3, r3, #4          ; r3 = dead3004 
    8A98  ldr     r2, [r3]            ;  d51c1972 <- [0xdead3004]  r2 = d51c1972 
    8A9C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AA0  add     r3, r3, #8          ; r3 = dead3008 
    8AA4  add     r2, r1, r2          ; r2 = e025a54a 
    8AA8  str     r2, [r3]            ;  [0xdead3008] <- e025a54a  
    8AAC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AB0  add     r3, r3, #4          ; r3 = dead3004 
    8AB4  ldr     r2, [r3]            ;  d51c1972 <- [0xdead3004]  r2 = d51c1972 
    8AB8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ABC  add     r3, r3, #4          ; r3 = dead3004 
    8AC0  ror     r2, r2, #0x19       ; r2 = 8e0cb96a 
    8AC4  str     r2, [r3]            ;  [0xdead3004] <- 8e0cb96a  
    8AC8  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8ACC  add     r3, r3, #4          ; r3 = dead3004 
    8AD0  ldr     r1, [r3]            ;  8e0cb96a <- [0xdead3004]  r1 = 8e0cb96a 
    8AD4  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AD8  add     r3, r3, #8          ; r3 = dead3008 
    8ADC  ldr     r2, [r3]            ;  e025a54a <- [0xdead3008]  r2 = e025a54a 
    8AE0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AE4  add     r3, r3, #4          ; r3 = dead3004 
    8AE8  eor     r2, r2, r1          ; r2 = 6e291c20 
    8AEC  str     r2, [r3]            ;  [0xdead3004] <- 6e291c20  
    8AF0  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8AF4  add     r3, r3, #8          ; r3 = dead3008 
    8AF8  ldr     r2, [r3]            ;  e025a54a <- [0xdead3008]  r2 = e025a54a 
    8AFC  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B00  add     r3, r3, #8          ; r3 = dead3008 
    8B04  ror     r2, r2, #0x10       ; r2 = a54ae025 
    8B08  str     r2, [r3]            ;  [0xdead3008] <- a54ae025  
    8B0C  ldr     r3, [fp, #-0x10]    ;         b <- [0xafffffec]  r3 = 0000000b 
    8B10  add     r3, r3, #1          ; r3 = 0000000c 
    8B14  str     r3, [fp, #-0x10]    ;  [0xafffffec] <- c  
    8B18  ldr     r3, [fp, #-0x10]    ;         c <- [0xafffffec]  r3 = 0000000c 
    8B1C  cmp     r3, #0xb            ; cpsr = 200001d3 
    8B20  ble     #0x8944             ; pc = 00008b24 
    8B24  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B28  ldr     r2, [r3]            ;  7b15fedc <- [0xdead3000]  r2 = 7b15fedc 
    8B2C  ldr     r3, [fp, #-0x2c]    ;         2 <- [0xafffffd0]  r3 = 00000002 
    8B30  eor     r2, r2, r3          ; r2 = 7b15fede 
    8B34  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B38  str     r2, [r3]            ;  [0xdead3000] <- 7b15fede  
    8B3C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B40  add     r3, r3, #4          ; r3 = dead3004 
    8B44  ldr     r1, [r3]            ;  6e291c20 <- [0xdead3004]  r1 = 6e291c20 
    8B48  ldr     r2, [fp, #-0x28]    ;         0 <- [0xafffffd4]  r2 = 00000000 
    8B4C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B50  add     r3, r3, #4          ; r3 = dead3004 
    8B54  eor     r2, r2, r1          ; r2 = 6e291c20 
    8B58  str     r2, [r3]            ;  [0xdead3004] <- 6e291c20  
    8B5C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B60  add     r3, r3, #8          ; r3 = dead3008 
    8B64  ldr     r1, [r3]            ;  a54ae025 <- [0xdead3008]  r1 = a54ae025 
    8B68  ldr     r2, [fp, #-0x24]    ;         4 <- [0xafffffd8]  r2 = 00000004 
    8B6C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B70  add     r3, r3, #8          ; r3 = dead3008 
    8B74  eor     r2, r2, r1          ; r2 = a54ae021 
    8B78  str     r2, [r3]            ;  [0xdead3008] <- a54ae021  
    8B7C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B80  add     r3, r3, #0xc        ; r3 = dead300c 
    8B84  ldr     r1, [r3]            ;  bf7f5ba8 <- [0xdead300c]  r1 = bf7f5ba8 
    8B88  ldr     r2, [fp, #-0x20]    ;         0 <- [0xafffffdc]  r2 = 00000000 
    8B8C  ldr     r3, [fp, #-0x40]    ;  dead3000 <- [0xafffffbc]  r3 = dead3000 
    8B90  add     r3, r3, #0xc        ; r3 = dead300c 
    8B94  eor     r2, r2, r1          ; r2 = bf7f5ba8 
    8B98  str     r2, [r3]            ;  [0xdead300c] <- bf7f5ba8  
    8B9C  mov     r0, r0              ; r0 = 00000000 
    8BA0  add     sp, fp, #0          ; sp = affffffc 
    8BA4  pop     {fp}                ;         0 <- [0xaffffffc]  sp = b0000000  fp = 00000000 
    8BA8  bx      lr                  ;counter= 2

