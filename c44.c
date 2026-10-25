#include<stdio.h>
int main()
{
    float temp;
    int i;

    for (i=1;i<= 5;i++)
    {
        printf("\nEnter temperature reading %d (in Celsius): ", i);
        scanf("%f", &temp);

        if (temp<=0)
        {
            printf("LOW TEMPERATURE WARNING!\n");
        }
        else if (temp<=35)
        {
            printf("Temperature Status: NORMAL\n");
        }
        else if (temp<=50)
        {
            printf("Temperature Status: HIGH\n");
        }
        else
        {
            printf("WARNING: CRITICAL TEMPERATURE!\n");
        }

    }

    float voltage;

    printf("Enter battery voltage: ");
    scanf("%f", &voltage);

    if (voltage<0)
        printf("Invalid voltage!\n");
    else if (voltage<3.0)
        printf("Battery LOW!\n");
    else if (voltage<3.7)
        printf("Battery MEDIUM\n");
    else if (voltage<=4.2)
        printf("Battery HIGH\n");
    else
        printf("Voltage exceeds the defined range!\n");



    int light;

    printf("Enter light sensor value (0-100): ");
    scanf("%d", &light);

    if (light < 0 || light > 100)
        printf("Invalid sensor reading!\n");
    else if (light < 30)
        printf("Streetlight ON\n");
    else
        printf("Streetlight OFF\n");

    int speed;

    printf("Enter motor speed (0-100): ");
    scanf("%d", &speed);

    if (speed <0 || speed > 100)
        printf("Invalid speed!\n");
    else if (speed == 0)
        printf("Motor STOPPED\n");
    else if (speed <= 30)
        printf("Motor LOW SPEED\n");
    else if (speed <= 70)
        printf("Motor MEDIUM SPEED\n");
    else
        printf("Motor HIGH SPEED\n");


    int level;

    printf("Enter water level percentage (0-100): ");
    scanf("%d", &level);

    if (level < 0 || level > 100)
        printf("Invalid water level!\n");
    else if (level == 0)
        printf("Tank EMPTY\n");
    else if (level < 25)
        printf("Water level LOW\n");
    else if (level < 80)
        printf("Water level NORMAL\n");
    else
        printf("Tank nearly FULL or FULL\n");


    int pin;
    int attempts;

    for (attempts = 1; attempts <= 3; attempts++)
    {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == 1234)
        {
            printf("Access Granted!\n");
            return 0;
        }
        else
        {
            printf("Incorrect PIN!\n");
        }
    }

    printf("Access Denied!\n");


    float tempe;

    printf("Enter room temperature: ");
    scanf("%f", &tempe);

    if (tempe < -40 || tempe> 125)
        printf("Invalid temperature reading!\n");
    else if (tempe < 20)
        printf("Fan OFF\n");
    else if (tempe < 28)
        printf("Fan LOW SPEED\n");
    else if (tempe < 35)
        printf("Fan MEDIUM SPEED\n");
    else
        printf("Fan HIGH SPEED\n");


    int reading;
    int n;
    int faults = 0;

    for (n = 1; n <= 5; n++)
    {
        printf("Enter sensor reading (0-100): ");
        scanf("%d", &reading);

        if (reading < 0 || reading > 100)
        {
            printf("FAULTY READING!\n");
            faults++;
        }
        else
        {
            printf("Sensor reading VALID\n");
        }
    }

    printf("\nTotal faulty readings: %d\n", faults);


    int battery;

    printf("Enter current battery level (0-100): ");
    scanf("%d", &battery);

    if (battery < 0 || battery > 100)
    {
        printf("Invalid battery level!\n");
        return 0;
    }

    if (battery == 100)
    {
        printf("Battery Fully Charged!\n");
    }
    else
    {
        while (battery < 100)
        {
            printf("Battery: %d%% - Charging\n", battery);
            battery += 10;

            if (battery > 100)
                battery = 100;
        }

        printf("Battery Fully Charged!\n");
    }


    float temperature;
    int j;
    int warning_count = 0;

    for ( j= 1;  j<= 5; j++)
    {
        printf("Enter device temperature: ");
        scanf("%f", &temperature);

        if (temperature < -40 || temperature > 150)
        {
            printf("Invalid sensor reading!\n");
        }
        else if (temperature > 60)
        {
            printf("WARNING: DEVICE OVERHEATING!\n");
            warning_count++;
        }
        else
        {
            printf("Device temperature NORMAL\n");
        }
    }

    printf("\nOverheating warnings: %d\n", warning_count);

    return 0;
}

