#ifndef SDB_H_INCLUDED
#define SDB_H_INCLUDED

typedef uint8;

void Menu();

//void s_d_s();
bool SDB_IsFull(void);
uint8 SDB_GetUsedSize(void);
bool SDB_AddEntry(uint8_t id, uint8_t year, uint8_t* subjects, uint8_t* grades);
//void SDB_DeleteEntry(uint8 id);
//int FindID(int array[], int size, int id_delt)
//bool SDB_ReadEntry(uint8 id, uint8* year, uint8* subjects, uint8* grades);
//void SDB_GetIdList(uint8* count, uint8* list);
//bool SDB_IsIdExist(uint8 ID)
//void display();




#endif // SDB_H_INCLUDED
