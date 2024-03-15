
.model small
.stack 100h
.data
ms1 db "Capital"
ms2 db "Others"
.code

main proc
    mov ax,@data
    mov ds,ax
    
    mov ah,1
    int 21h
    
    cmp al,'A'
    jge check
    jl exit1
    check:
    cmp al,'Z'
    jle exit
    jg exit1
    
    exit:
    mov ah,9
    lea dx,ms1
    int 21h
    jmp break
    
    exit1:
    mov ah,9
    lea dx,ms2
    int 21h
    
    break:
    
    main endp
end main