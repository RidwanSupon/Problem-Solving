.model small
.stack 100h
.data
.code
main proc
    mov cx,0
    
    level1:
    cmp cx,5
    je done
    mov bx,0
    
    level2:
    mov ax,cx
    add ax,bx
    
    mov ah,2
    mov dl,'*'
    int 21h
    
    cmp bx,cx
    je level3
    inc bx
    jmp level2
        
    level3:
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    inc cx
    jmp level1
    
    done:
    main endp
end main
    