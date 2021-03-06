### Условие

Каникулы Васи будут длиться n дней! И Вася решил за это время улучшить свои навыки программирования, а также позаниматься спортом. Про каждый из n дней каникул Вася знает, будет ли открыт в этот день спортзал, а также будет ли в интернете в этот день проводиться контест. Для i-го дня возможны четыре варианта:

    1. в этот день закрыт спортзал и не проводится контест;
    2. в этот день закрыт спортзал и проводится контест;
    3. в этот день открыт спортзал и не проводится контест;
    4. в этот день открыт спортзал и проводится контест. 

В каждый из дней Вася может либо отдыхать, либо писать контест (если он проводится в этот день), либо заниматься спортом (если открыт спортзал).

Перед вами стоит задача найти минимальное количество дней, в которые Вася будет отдыхать (то есть не будет заниматься спортом и не будет писать контест одновременно). Единственное ограничение от Васи — он не хочет два дня подряд заниматься одним и тем же видом активности, то есть он не будет заниматься спортом два дня подряд и он не будет писать контесты два дня подряд.

### Входные данные

В первой строке следует целое положительное число n (1 ≤ n ≤ 100) — количество дней в каникулах Васи.

Во второй строке следует через пробел последовательность целых чисел a1, a2, ..., an (0 ≤ ai ≤ 3), где:

    * ai равно 0, если в i-й день каникул не работает спортзал и не проводится контест;
    * ai равно 1, если в i-й день каникул не работает спортзал, но проводится контест;
    * ai равно 2, если в i-й день каникул работает спортзал и не проводится контест;
    * ai равно 3, если в i-й день каникул работает спортзал и проводится контест.

### Выходные данные

Выведите минимально возможное количество дней, в которые Вася будет отдыхать. Помните, что Вася отказывается:

    * заниматься спортом в какие-либо два подряд идущих дня,
    * писать контест в какие-либо два подряд идущих дня.

### Решение

