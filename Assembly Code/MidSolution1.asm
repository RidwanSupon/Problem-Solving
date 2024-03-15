.model small
.stack 100h
.data
.code
main proc
    mov cx,5
    outerLoop:
    mov bx,cx
    innerLoop:
    mov dl,'*'
    mov ah,2
    int 21h
    loop innerLoop
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    mov cx,bx
    loop outerLoop
    
    exit:
    mov ah,4ch
    int 21h
    main endp
end main
