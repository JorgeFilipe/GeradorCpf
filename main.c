#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int flag = 0;

    while(flag==0)
    {

        srand(time(0));

        int a1=rand()%10;
        int a2=rand()%10;
        int a3=rand()%10;

        int b1=rand()%10;
        int b2=rand()%10;
        int b3=rand()%10;

        int c1=rand()%10;
        int c2=rand()%10;
        int c3=rand()%10;


        int soma = (a1 + a2 + a3 + b1 + b2 + b3 + c1 + c2 + c3);// � o sm da f�rmula: 11-(sm%11)

        if (soma == 0)
        {
            flag = 0;
        }
        else if (soma == 9)
        {
            flag = 0;
        }
        else if (soma == 18)
        {
            flag = 0;
        }
        else if (soma == 27)
        {
            flag = 0;
        }
        else if (soma == 36)
        {
            flag = 0;
        }
        else if (soma == 45)
        {
            flag = 0;
        }
        else if (soma == 54)
        {
            flag = 0;
        }
        else if (soma == 63)
        {
            flag = 0;
        }
        else if (soma == 72)
        {
            flag = 0;
        }
        else if (soma == 81)
        {
            flag = 0;
        }
        else
        {

            int PrimDig = 0;
            int SegDig = 0;

            int smPd = 0;
            int smSd = 0;


            smPd = (a1 * 10) + (a2 * 9) + (a3 * 8) + (b1 * 7) + (b2 * 6) + (b3 * 5) + (c1 * 4) + (c2 * 3) + (c3 * 2);

            PrimDig = 11 - (smPd % 11);

            if (PrimDig == 11 || PrimDig == 10)
            {
                PrimDig = 0;
            }

            smSd = (a1 * 11) + (a2 * 10) + (a3 * 9) + (b1 * 8) + (b2 * 7) + (b3 * 6) + (c1 * 5) + (c2 * 4) + (c3 * 3) + (PrimDig * 2);

            SegDig = 11 - (smSd % 11);

            if (SegDig == 11 || SegDig == 10)
            {
                SegDig = 0;
            }

            /*
            ESTADOSDE ONDE O CPF PERTENCE
            CPF: abc.dfc.xyz-cb verifica-se o numero na posi��o (z)
            Exemplo: N�:  003.939.708-41 = C�digo 8, corresponde ao Estado de S�o Paulo.

            C�digo 0:  Rio Grande do Sul
            C�digo 1:  Distrito Federal � Goi�s � Mato Grosso � Mato Grosso do Sul � Tocantins
            C�digo 2:  Par� � Amazonas � Acre � Amap� � Rond�nia � Roraima
            C�digo 3:  Cear� � Maranh�o � Piau�
            C�digo 4:  Pernambuco � Rio Grande do Norte � Para�ba � Alagoas
            C�digo 5:  Bahia � Sergipe
            C�digo 6:  Minas Gerais
            C�digo 7:  Rio de Janeiro � Esp�rito Santo
            C�digo 8:  S�o Paulo
            C�digo 9: Paran� � Santa Catarina
            */

            printf("\n\n\n\n      Cpf: %d%d%d.%d%d%d.%d%d%d-%d%d  \n\n\n\n ",a1,a2,a3,b1,b2,b3,c1,c2,c3,PrimDig,SegDig);

            //printf("O CPF gerado Pertence: %s","EstadoCpf");

            flag = 1;//SAI DO LOOPING

        }




    }

    return 0;
}
