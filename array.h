#ifndef _ARRAY_H_
#define _ARRAY_H_

const int BLOCK_SIZE = 2;
typedef struct
{
    int* array;
    int size;
}Array;

Array array_creat(int init_size);//����һ������
void array_free(Array* a);//���տռ�
int  array_size(Array* a);//Ŀǰ�ж��ٸ��ռ������
int* array_at(Array* a, int index);//�������鵱��ĳ����Ԫ:���Զ�Ҳ����д������������ֵҲ��������ֵ��
void array_inflate(Array* a, int more_size);//��������
void array_set(Array* a, int index, int value);//��������д�붫��


#endif

