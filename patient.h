// Verifica se PATIENT_H nao esta definido
#ifndef PATIENT_H 
// Define PATIENT_H para evitar inclusoes multiplas
#define PATIENT_H 

// Inclusao da biblioteca necessaria
#include <time.h> 

// Definicao do tipo "Patient" como um alias para a estrutura "patient"
typedef struct patient Patient;

// Declaracao da funcao para criar um novo paciente
struct Patient* create_Patient(int id, const char* name, struct tm* birthdate, struct tm* arrival);

// Declaracao da funcao para liberar a memoria do "patient"
void destroy_patient(Patient *patient);

// Declaracao da funcao para obter o identificador do paciente
int get_patient_id(Patient* patient);

// Declaracao da funcao para obter o nome do paciente
const char* get_patient_name(Patient* patient);

// Declaracao da funcao para obter a data de nascimento do paciente
struct tm* get_patient_birthdate(Patient* patient);

#endif // Fechando o ifndef