.global loadGDT
loadGDT:
    ; load the gdt stuff
    jmp 0x08:.reload_CS
.reload_CS:
    mov ax, 0x10
    mov ds, ax
    mov es, ax
    mov fs, ax
    mov gs, ax
    mov ss, ax
    ret