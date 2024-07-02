#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Patient
{
    int id;
    char* name;
    struct tm* birthdate;
};

struct Patient* createPatient(int id, const char* name, struct tm* birthdate, struct tm* arrival)
{
    struct Patient* patient = (struct Patient*)malloc(sizeof(struct Patient));
    patient->id = id;
    patient->name = name;
    patient->birthdate = birthdate;
    return patient;
};