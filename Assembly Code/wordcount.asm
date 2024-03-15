.model small
.stack 100h
.data
.code

main proc
    Lp:
    mov ah,1
    int 21h
    inc bl
    
    cmp al,13
    je exit
    jmp Lp
    
    exit:
    mov ah,2
    mov dl,13
    int 21h
    mov dl,10
    int 21h
    mov ah,2
    mov dl,bl
    add dl,47
    int 21h
    
    main endp
end main