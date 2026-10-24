# cis165-lab7


1. How does the BMI formula use pounds and inches? Why is height * height needed?
   - The BMI formula uses pounds for weight and inches for height, height * height is needed because it represents the h^2 in the formula.

2. How do your conditions handle exactly 18.5 and exactly 25.0? Does the order of your conditions matter? Explain how your conditions avoid gaps and handle both endpoints.
   - 18.5 and 25.0 are optimal because 18.5 isn't less than 18.5 and 25.0/18.5 is <= 25. Yes the order does matter because its the order it evaluate the numbers.

3. Why do you check weight and height before calculating BMI?
   - because both weight and height have to be > 0.

4. Why do you classify the unrounded BMI and round only its displayed value?
   - So that the data can be more accurate.

5. What does strcmp return for equal text? Why is == not the correct comparison for character-array contents?
    - strcmp returns 0 for equal text.

6. How do you make each mixture work in either input order and handle two identical primary colors?
    - To make each mixture work I use the || because it means or so it checks either. This lets it display a color if both inputted colors are the same.

7. How do you check for an invalid color in either input position?
   - I check to see if the inputed color is blue red or yellow by using the strcmp code, if it isn't it will display that its invalid.

8. How do named constants and result variables make your programs easier to read and check?
   - Named constants make it easier to read because they fit in more instead of having to right the same number a bunch of times.
  


Test Both Programs


Inputs: weight, height	    Expected result                          Actual Result                                    Match or Correction
100, 70	                  14.35 — Underweight.                     14.35 — Underweight                                    Match
150, 70	                  21.52 — Optimal weight                   21.52 - Optimal weight                                 Match
200, 70	                  28.69 — Overweight                       28.69 — Overweight                                     Match
150, 0	          Error: weight and height can't be less than zero Error: weight and height can't be less than zero       Match
-150, 70	        Error: weight and height can't be less than zero  Error: weight and height can't be less than zero      Match


Inputs: weight, height	    Expected result            Actual Result         Match or Correction
165, 72	                  22.38 — Optimal Weight   22.38 — Optimal Weight          Match

Inputs: first color, second color	Expected result          Actual Result                                    Match or Correction 
red, blue	                            purple                purple                                              Match              
red, yellow	                          orange                orange                                              match
blue, yellow	                        green                  green                                              match
blue, red	                            purple                purple                                              match
red, red	                              red                  red                                                match
orange, blue	             Error: Invalid color       Error: Invalid color                                      match
red, orange	               Error: Invalid color        Error: Invalid color                                     match

Inputs: first color, second color	  Expected result          Actual Result                                    Match or Correction 
blue, blue	                            blue                    blue                                               Match           


To run in onlineGDB open the files on the site check to see if its on c++ then input asked values and run the code for both.



