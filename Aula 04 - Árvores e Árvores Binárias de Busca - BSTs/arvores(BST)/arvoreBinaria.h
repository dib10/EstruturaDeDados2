typedef struct NO *ArvBin;

ArvBin *cria_arvBin();
void liberar_arvBin(ArvBin *raiz);
int vazia_arvBin(ArvBin *raiz);
int altura_arvBin(ArvBin *raiz);
int totalNO_arvBin(ArvBin *raiz);
void preOrdem_arvBin(ArvBin *raiz);
void emOrdem_arvBin(ArvBin *raiz);
void posOrdem_arvBin(ArvBin *raiz);
void libera_NO(struct NO *no);
int insere_arvBin(ArvBin *raiz, int valor);
int remove_arvBin(ArvBin *raiz, int valor);
int consulta_arvBin(ArvBin *raiz, int valor);
struct NO *remove_atual(struct NO *atual);
