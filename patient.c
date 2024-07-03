#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "patient.h"


struct patient  // Definição da estrutura do paciente 
{
    int id;
    char* name;
    struct tm* birthdate;
    struct tm* arrival;
    
};

struct Patient* createPatient(int id, const char* name, struct tm* birthdate, struct tm* arrival)
{
    struct Patient* patient = (struct Patient*)malloc(sizeof(struct Patient));
    patient->id = id;
    patient->name = name;
    patient->birthdate = birthdate;
    patient->arrival = arrival;

    return patient;
};

// Libera a memória alocada para a estrutura do paciente.
void destroy_patient(Patient *patient)
{
    free(patient->name);
    free(patient->birthdate);
    free(patient->arrival);
    free(patient);
}
// Retorna a identificação única do paciente.
int get_patient_id(Patient* patient)
{
    return patient->id;
};


// Retorna o nome do paciente.
const char* get_patient_name(Patient* patient)
{
    return patient->name;
};

// Retorna a data de nascimento do paciente
struct tm* get_patient_birthdate(Patient patient)
{
    return patient.birthdate;
};





