/* Programming Exercise 7.11 */

#include <stdio.h>

#define ARTICHOKES          2.05
#define BEETS               1.15
#define CARROTS             1.09

#define DISCOUNT            0.05

int main(void)
{
    char vegetable_type = 0;
    float order_weight = 0;
    float artichokes_weight = 0;
    float beets_weight = 0;
    float carrot_weight = 0;

    float price_per_lb = 0;
    float total_weight = 0;
    float charages = 0;
    float discount = 0;
    float shipping_charges = 0;
    float grand_total = 0;

    printf("Please enter vegetable type:\n");
    printf("\'a\' - artichokes\n");
    printf("\'b\' - beats\n");
    printf("\'c\' - carrots\n");
    printf("\'q\' - exit\n");
    
    while(scanf(" %c", &vegetable_type), vegetable_type != 'q')
    {
        while(getchar() != '\n')
            ;
        switch(vegetable_type)
        {
            case 'a':
                printf("Enter amount of artichokes: ");
                scanf("%f", &order_weight);
                artichokes_weight+= order_weight;
                total_weight+= order_weight;
                break;
            case 'b':
                printf("Enter amount of beet: ");
                scanf("%f", &order_weight);
                beets_weight+= order_weight;
                total_weight+= order_weight;
                break;
            case 'c':
                printf("Enter amount of carrot: ");
                scanf("%f", &order_weight);
                carrot_weight+= order_weight;
                total_weight+= order_weight;
                break;
        }
        printf("Please enter vegetable type again (q to exit):");
    }

    charages+= artichokes_weight * ARTICHOKES;
    charages+= beets_weight * BEETS;
    charages+= carrot_weight * CARROTS;

    grand_total = charages;

    if(charages > 100)
        discount = DISCOUNT * charages;
    
    grand_total-= discount;

    if(total_weight > 20)
        shipping_charges = 14.0 + (total_weight - 20) * 0.5;
    else if(total_weight > 5)
        shipping_charges = 14.0;
    else 
        shipping_charges = 6.5;

    grand_total+= shipping_charges;

    price_per_lb = total_weight / charages;

    printf("The orders cost per pound: %.2f\n", price_per_lb);
    printf("Total pounds ordered: %.2f\n", total_weight);
    printf("Cost for artichokes: $%.2f\n", artichokes_weight * ARTICHOKES);
    printf("Cost for beet: $%.2f\n", beets_weight * BEETS);
    printf("Cost for carrot: $%.2f\n", carrot_weight * CARROTS);
    printf("Total cost for the order before discount: $%.2f\n", charages);
    printf("The discount: $%.2f\n", discount);
    printf("The shipping charge: $%.2f\n", shipping_charges);
    printf("The grand total: $%.2f\n", grand_total);

    return 0;
}