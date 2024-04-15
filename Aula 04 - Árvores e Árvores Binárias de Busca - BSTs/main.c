int main()
{
    int x;
    ArvBin *raiz; 
    raiz = cria_arvBin(); 
    libera_arvBin(raiz);  
    if (vazia_arvBin(raiz))
    {
        printf("Arvore esta vazia\n");
    }
    else
    {
        printf("Arvore possui elementos\n");
    }
    x = altura_arvBin(raiz);
    printf("Altura da arvore: %d", x);
}

