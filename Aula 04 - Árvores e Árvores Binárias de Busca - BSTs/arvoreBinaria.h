typedef struct NO *ArvBin;
ArvBin *cria_arvBin();
void liberar_arvBin(ArvBin *raiz);
int vazia_arvBin(ArvBin *raiz);
int altura_arvBin(ArvBin *raiz);
int totalNO_arvBin(ArvBin *raiz);
void preOrdem_arvBin(ArvBin *raiz);
void emOrdem_arvBin(ArvBin *raiz);
void posOrdem_arvBin(ArvBin *raiz);
