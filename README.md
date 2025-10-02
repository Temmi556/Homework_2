# 🧪 Расчет количества молекул воды (Water Molecules Calculator)

## 📝 Описание проекта

Этот небольшой проект на языке C решает классическую физическую задачу: расчет общего количества молекул воды в заданном объеме, выраженном в квартах (quarts).

Программа запрашивает у пользователя объем воды и использует предоставленные в задаче константы для вычисления результата в научной нотации.

### Исходная задача

**Задача 1:** The mass of a single molecule of water is about $3.0 \times 10^{-23}$ grams. A quart of water is about $950$ grams. Write a program that requests an amount of water, in quarts, and displays the number of water molecules in that amount.

## 🛠️ Алгоритм расчета

Программа следует простой линейной логике:

1.  **Ввод:** Пользователь вводит объем воды в квартах ($Q$).
2.  **Шаг 1 (Масса):** Объем переводится в общую массу в граммах ($M$).
    $$\mathbf{M} = Q \times 950 \text{ грамм}$$
3.  **Шаг 2 (Молекулы):** Общая масса ($M$) делится на массу одной молекулы ($M_{\text{молекула}}$), чтобы получить итоговое количество ($N$).
    $$N = \frac{\mathbf{M}}{3.0 \times 10^{-23}}$$
4.  **Вывод:** Результат выводится на экран.

![Блок-схема алгоритма расчета молекул воды](images/Homework_2.drawio%20(1).png "Блок-схема")

[Ссылка на блок алгоритм](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=Homework_2.drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0%20%E2%80%94%201%22%20id%3D%22IctjcWrpuKqRMifcW6s6%22%3E7VtZc6NIs%2F01%2FXIjvgkQ%2ByP7JgQCSYBeJhA7YhM7%2FPpb2HJ7aXePZ6bdM3dx2DJVlRRF5snMUwn6grDFJDZenWhVEOZfNlAwfUG4L5sNDOEI%2BLf2zI89OAU%2FdsRNGtyFnjusdAmfzrz39mkQtq8Eu6rKu7R%2B3elXZRn63as%2Br2mq8bVYVOWvr1p7cfhNh%2BV7%2Bbe9dhp0yWMvuSGe%2B6UwjZOnK8M49ThSeE%2FC9ztpEy%2BoxhddCP8FYZuq6h6PiokN81V5T3p5PE%2F4zujXhTVh2X3khIHkqnwvUjpkCKqlxtvBDf%2BzeZxl8PL%2BfsNfNngO5mOiCkwLVt3Nd1Xgt756GvhP%2B2AoGgjAZA2MzTyPg6P44T8HfaG49ZOBvnDwF5J4OgafD6MM%2F3QxsOrH691PfVTY10tvwJ0Ag4MGMyZpF1q1568jI8Ac6Eu6Igct%2BOuZL5Vy19MQNl04vei6K0kMqyLsmhmIPI3id4M9IfbeHJ%2FNDz%2FZNHlhevLe590RF3%2Bd%2Bdko4OBulz9hI%2BQdG73VTxnQK9hBy8%2B9tk3912ppqr4MwvUiEGiFU9o56%2FFv2L3l3uXWY256IcbN98Z3FdtWfeOHfwyxzmvisPuBHPooFwavHPJbM72wA%2FaOGZ76mjD3unR47cbv2eZ%2BBaNKHwB%2FRwHyBgUb4o15H%2B%2F7ftZLt3sz0Vf%2Ff5oIejPRo2K%2BmegBKl9v%2B6%2BjB%2F8AeoDKrXuzarqkiqvSy%2Fnn3jf4eZbZVlV9h04Wdt18j99e31Uf9Ms%2FhA%2F6QfhgH4TPh3Hxt3wW%2FW5cbWuv%2FFtxdf8iaD5O9p2gCRJOvR4CrXt5HuZV3HgFEKzDJgV3GTZvx4zngT%2BKs1E6hU%2FZ%2BpPi7ldH%2BaPAi39W4CX%2FFa4DNNrML8L12nSfQvTaeA7YD62%2FH7Gxb12u%2B73%2FndTPnOuIv2PmTlzEPngKLT%2FP5b4TQZHXwECpXxtBsc%2FzZQ0MPpwIAa%2BG%2Fgv8UWv%2B%2Bph%2F%2F3oqhGD%2FtEs%2BbQv%2BJ6SzH%2FnMH6Yz6p%2FxLQz7GM35Wb5FfZ5v7f6P5Ekc%2FsedEv6uFYN0eNb7TzLs00SX5m3PN5b%2B2v0p61g3uJuHjezmvp1dP9E1pj834Ye9L71%2BUvBDD3vfB9%2FFXp%2B7CjPPQ%2FcD%2BoXk42b68fNlD%2FYHWvhXmuKtK3ZNdf1aaNm89qUnPy2meK01%2FRbl1egnXtP95pVl1YEwWJW%2Fr4JensYlEMzDaL1KvQavsOEH4HPtz%2FNDBENf%2BSFMfuuHwFm%2F9UP47Q7w5znie%2BWc75cKyqpcs2HgtclDMoR%2FWDT4SkNfkdBnTvodGvrQehExX1UgnmoOL6b6hArER7eQT3HsX1KC%2BDrPE%2Ft6y3s%2FWoJAoDcTob%2BWQMN%2FroL152D5S5FEfRRJ%2F65i1lskYchfRdIb7oG95RSfjaTv11X%2BlentJzONB27wXb5Bv%2Bhk%2FvOKMdwl2JcSD5%2FY05lgauTe%2F%2F804p%2BkERj1Dp2nPotGvLtH%2FT6d%2FzkPhV4ClXuCIQAg%2FkmPg74xxjsm%2B%2FB2i9h8cLv1M54HvWueP0fyPvI86C9WGP%2F6c6Q3efGnJePvw%2FmfSr0w9AcZ86OpF36bw%2BFPS73vavEzOdy%2FY2vxU0D50do5%2Bk%2BCEnlT9UPeYumjoERh9McTfTIov08Hf0qmoqEX9RX46SWGx0LOQ%2FXlnUoP9YJXIU9vOfzJgtD9AHmq9Hx9bYJ9Jf%2B26vPDnPmLOdHfyrkI8QafyLc59%2FNKKz%2Bq2%2F8o%2FL0Oar%2BemaDvMcfPKgS%2Fq6T3npS9heEdaWnx8OIVs2og9b18613C3KjadIUaGL9UXVetVfh8HWA8%2Fxo%2F6Jet8moN9UEYef0D8J9moO%2FQ7NZnOIzX1o%2Bvgz1U4EHHwwXpp17oqWedyus8EAwemxuhLuMvGzY9Mbo5QqoYVzT42VnHhD%2FG4Gi7fjAGS7vrf7emqWIVUBxTsCWT84tTEoj5cEmZo2fDOc0GrMzRs8yh%2BD6lZ42TYZmTJz3bI3p2RL05IfN1AiaHzFMCHTdUEUhB4hdH%2BrzBhot97PzNbj7bp97fJEOgk9ywoOCEebCOJnOSUp84Q0ogL6XYhlG9q2WbOJwOwb5nLb6qCryuL5ayKdD8Esp%2Bzp%2BHXKFDC97og6mc0spKlZ1t%2B9dry5uhEnnRxvEI1wPsinFcCEmHgQT7L8E%2Fawd2u%2BW04oIhkV5qJbI44%2BICsQsYHlbVLeBPAX%2BrvGnOPrIDB5asxqp7knnOFBkWq7J94kNMZfYqDcslw3jQIY47Tx5pu%2BNdfmunGisQP1HW0FwpQUNM36ZuIw0jWEmgX7RiPxvqCSwf%2FBrrQjXdaSB1R6p6uh0N3iOCHpFhItxNFyyfsbPpSxzCyUASW2%2B4NU9bGA%2FcjuLns1YZUqbADDNhIm%2FwzupHQAZRkAtkNad0iq94oLcOIWanmyk6ar69gJAibGsYx9SsmjUqBJjq8MAoSUlKiezAy1LpRgTpz21gILhflg%2BTMqHdRENlnDBkmcx96OmOVuiHGL0aNCoPNDm3utSr23CPVTAOLMKQyKWGVUSZ%2FUZBD9XVUg5JkaFwoNJbg1YGEVWOt5Mnby4HFL4EDxoRInCPTO8QFAMWGByh0vKC2%2Bh6xgmFb8jlusktLEqxteLMRLIdhiRuOmWZCxd0XS2L9tv0prKmksdSkcHErnRAbmKy40mFPW2AO47UuAjBSHt7qnnVuta5cvNuDY5gUDpOqstuYb3IlGoeyGwkTzgV3q4Rtl2NRdgrHnuGhz3qouGZMPluq9YavSO6Gdsv%2FOTP15HkhxvwX84K6b2Gbc1lRSdSY5M1SMnkdVwM8r9gE7l3dBzEKpZzj0Da7aRC1%2FLCNmN56JBjE%2FRjtICzHnV%2FxarNxW6mUEwqVYGIAMM3l6Ar2gM5a211BVK6xA3rIk1vx8bjZaKofjqrfaKVCwDLBnbjPeTtVBasPbxBl3G3Qf11dgdY%2BIzUHbU6HoqV8CRfD4EusebpRoWZUydXSIh6iWVOt1Xn3AqHLBxDYtcjGV7bjV%2BDHmHG%2FELzdiLZZ1lTDOkqGzOxa0jXgzJbRQFPknUYtoA6MVJyQ5oZE1vn0pLcpSvgLRpKSS5oLB1v3TYAShnXkJjtNodFkrKxKJ2m2xTEIQpDWSsOGH6t271j%2BTE%2BPGIeTKtT6%2F3c4NCwm3M7WpJQZKemLGOf0E56ebjV%2FKzS%2B6vCHiQJx3HSqbEgiuoCLLtI920YnlRwVIFZwrY4bdMKD%2Fer8VaPOQ9hFAXBzm9AY65067bphLSK5RrPDzWeUTsL3LPgSiFjILN7q9VrUx5wSiwPRhkgwVQt53hU7H3ITTpwcapcpExIGdl3bFtqN1sRCg0hzToo8RJLoDU1sGrH39hU1NkVPMB4fbwdUQQpm%2BYSVHigoFyWDwhB7Fpw70MyQjlE6gyTm4Z%2FigCGHCJRg5Tn2urc%2B%2FMEhDz40kETcT2lYmLsYzkc6ONeGIs1lmqpQ6QkRRHEAt3sZl%2BVh1WdZROUS70I7p7wbz5QFLGrRhcN9NWprvPZOFbX04JcMcU62NRUadLsUJe8vhDk2BnLPpI2q2cvZ5DlmU1HzyAc5Ss4clXYaVt2TOOJNFmJKxmFNEIEQYhtNsO%2ByEdSlsAH96hecWfwW5HnjDES5B27IuswhESHUoWAESDp6EoM73e8KpOdst1S0ukG%2B5jJ8eh6adwvEgRqpyLyUlJ1rxcypjWJ683usI04EKBnQFauxaHII6Bktcrhup5ZaUmRkuRt2ZC4xayqaQ2rqL271al2XejKjuWrrV6V0BE2SNDXILIC%2F7YshzUt6%2BbkOOz5haVEk1%2FSSwPjZIk42W05uct5mJjc6hwlI8GcBoVtghTTUDI0apJcwya%2B24Kwfzi0XCWY%2B%2BPEYrvDNdcO6p6hMZwaRUhBFD%2BKpoWjigkENlPlisG6sgK3GlIcW4aH%2FN6UuUQfnG3J%2BodkhaYBloHobXbzhnMLk6ctcTVvj3kI%2FKaNhJ2PTYin7BEWdF1GRuW2urqrPjrY2UbomOZJZ%2B%2BKQYm1Z42G0nD0ZXRgqB655EF0OZpH7zQwMhWK0uGYjpyVVa5h6g5C0ievRiHN3uZUlkamMp6FG%2By1xwXzErOaAfcRSH7xzibYtghJZZIjcj7OZzkP11zZ2Y1TJRMlHkuU8W2MqUuj3G9lB5c9SPCBRCtNi251YY%2BcTABoYfRLI2QPh4VIQmS31TwqnSeKadckYwQAANVRl068mJRzdc10nYdIdqwvspr1iAl2IY6BKKrbg8AveDrh99bBZXpTwKV9e1Ljvb7JRoiEmcqjxMy8%2BYhmBHunFw0nK1SkSdFpV6GtpQjM6B%2B4q1A6YVjWhErOMKsfHe9gQ9LtphxqCMtZyuCq8UaREKYU2bkrquZirsvMoqiBKtfdidQ2HJwem0OCT0NDDYxM68SMy3tLUezOjU7q5F5PeRzl%2B8OV0aQpqQYsGy1ngaBjdIPzw9lP8WMume6yPyxtccTkgaKJEfXZ25yZun4OT5ImtLRhkiCdMIpln6MBw9LOKSumPd7QQM3LQ8Izymk57Mq2W5kLFUkSkk%2Bxda3wsbEN030I%2FEZwblnG7q011s%2FBI358okaIhTCQMh4E1QKZfxDNSu9au0hWoyArBKIBQbHBBDGW4UqMHC6rBpbh4CINQhR8Q69RLE93xeJqOnHa68J1OTcng93uSrM%2FYGZZ1xhZ%2BAzK5uPOVi4VD51iwVn5COKypoBY%2FA1E5nPMDmf%2BNnlwYNx8StR75FDzjSu6exHvm9rcX2U2ivJcIateO%2FCTY9wiA1n9M5kwN6z8M5TRR01lEvjqJSvlzMxhgJhzzG2mG4%2FUBEAdl2VOjzTwFva6ErntAfFY9HKX3%2Bbr9tzTTh6YTHnpHh0wO0XeQSFIbX3IQFE6coHnverAj7zowAfzVmRoZyXFa8ceJHWNE2p3b6HzbUNcZioy8a1z0ThGJnjJ7fQjJ4irJ%2BT4AQMbhNEguLEt3ZVzAi7XGn0pZUxPGZacrUk9MaFtXSGLeJR2u0iY1oidy1CoH3mGtmFN2KVZ5RBTPJIScz3UG0KLux6ceKHrlFfNGngJ3clmNlI3eM3HaAfY0zyNgjrT6D5liiUYztKtbf0sI3a51PiazNpEOPD5MAzXIlnwqb2IxQSz82NGtx1VbQXN3WMe324upMoCkp1EA%2FOggZUiMBDOCjCG7i9Ir5x1lD6ew4SFqrkXYHnnDUN%2F89Gwizkvx4rFWHF1ubOFCjbIHKww7yHPYrQxRoL0IoJwayq8tj2dTm2Wo4jMHFO1ZVIUuCoOdmsCf4H18nJI4bPb2UhczNWoClYzGufLpjjrfqktCGsYGuPipnRyokqle%2BGqAhc6qpxZQdctsVLcohcJzD5rsD1Vt%2BG0oIKoojQv5TMZKnxTCVdmC4zV2rtq5dE7qYGyxYRwgT7RKZJfx3QxeIx3aCkeZZEb5JirvJFiWHyblZrS8ARfVHGdz4BbCTFucDOrEolB9227j27%2BSCUijJEYzoZnXRItEeh%2FDaOk7EsnGGyVHzApkhfFEV2HWWQ%2Bq%2BnY8C9EvY1ux9w4mN2cmm5nBhXTpci5Svj9youvkmZIEzZwwhrIjVuybGAVC1a%2BrlJXbNseQffN4YNRlFdW7e7s3hbja3MTMi%2BHIVYRbPN65v2xANGLmbaZHO9x3FSusLWm%2FmQH4uRGZnMEb8t4RjGJlryZLCFNLEkjSc9geklsJQa5xIGYxKXcoJJgMCPjsoBd4BcB1mO%2F2vSWN3KLn51nC0p9pqePtD0pG6w6oxs5Fejp7AS9nQCiJaQFwLBkQq0gHo%2FDpG%2FtvUitUIq2uS4RArlSQj8rMdFTlBDXzlUJI1stVdJ1f8e0sc%2FT2rSwurv08egbqOucKMBCc2Hc8zpjbIhzhwUc3xvbI8iUlJdpY92LWrzzNSgHc%2FeAtEZ72THEonCwTcatAWGWBxc2tVvgD%2BWi4H0w%2BteGkIRYc%2B1u9NOd0XohGu9jUkASDA5XzOMUoCmIngCHJVSDEzmn2RBq4acCBJ01sEMg8J24RNMQlfhpO4ekebvsijUEERwyOTcxGYmrl6r7nTwfbQlrB6eN%2B6lrdErvrplpSFJsuzV6lA3Gd41lwdX9PK3RejT2aF7F5zU7NHhb2%2FJ0oSpnPLmWPJocE%2Bk7RtG3RiVAgWRGwlX2N9whM1HKqhAvhhZqw9ClW26gZro1YaNs9608d0ViRmtwXxNMFGASpjiKNo8r2NTMnR8YeRM84Fpmr6nph2AzervQls3yN5tw23SzVXM194WFpQ%2But2cGcel9jU03SzzSImkDy%2B3AdimMjMKn%2BMqwATmxxo0HH%2B9hhK5C39hpLsO1trPF4jUqhYD%2BdUdk2tmuCBYkOllt2%2Bq6SGbrBqd8Sjg7ASebe7OXMWaPFtUjDRMu3QlzOBwzA1%2BUY0WjWVT0lXMSHheCR8eE2B0g8sJf0nhnywc2rzI6CSEz3veeDMnOjvYexixl3Nsdj8prqYIWmrVUAf8s2XWfyS2FzJgnrb%2FS5lpGovlcOFytfl%2Bw7BeEKarBu%2BRPb582YZsuL9trafdFOwjz8GU7DNKXzbzyr1%2Frm%2FcvXL4Y%2FiklTexNSRP%2FDSG%2FrWrC71Q1UeK3DfJJhU3iEx9%2B%2FbLnVd%2Bva%2F9j7yWRryvY%2BAffPv%2F2gdabBwbY5tc%2Bh3r3awk%2F8eWfjz6I%2BuxXgP4XPVNC33tdF3oH62%2FfuvxAUAHN5%2B91P2Ls%2BdvxCP%2Ff%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## 🚀 Как запустить программу

Для запуска программы вам понадобится **компилятор C** (например, GCC) на вашей системе (Linux, macOS, Windows/MinGW).

### 1. Компиляция

Откройте терминал в папке проекта, где находится файл `.c`, и выполните команду компиляции:

```bash
gcc water_molecules.c -o molecules
````

> *Файл `water_molecules.c` будет скомпилирован в исполняемый файл с именем `molecules`.*

### 2\. Запуск

Запустите исполняемый файл:

```bash
# Для Linux/macOS
./molecules

# Для Windows
.\molecules.exe
```

### 3\. Пример использования

После запуска программа попросит ввести объем.

```
Введите объем воды в квартах: 1.0

--- Результат ---
Общая масса: 950.00 грамм
Количество молекул в 1.00 квартах: 3.17e+25 
```

## 💻 Используемые константы

В программе используются следующие значения:

| Параметр | Значение | Тип данных в C |
| :--- | :--- | :--- |
| Масса 1 кварты | $950.0 \text{ г}$ | `double` |
| Масса 1 молекулы | $3.0 \times 10^{-23} \text{ г}$ | `double` |
---
## 👤 Информация о разработчике
### Автор проекта
| Поле | Значение |
| :--- | :--- |
| **Разработчик** | Андреев Артём |
| **Группа** | БТИИ-251 |
| **Связь** | [Telegram - @Temmik1, почта - temmi556@mail.ru] |
---
