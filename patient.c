#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Patient
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
void destroy_patient(struct Patient *patient)
{

};

int get_patient_id(struct Patient* patient)
{

};

const char get_patient_name(struct Patient* patient)
{

};

struct tm* get_patient_birthdate(struct Patient patient)
{

}


