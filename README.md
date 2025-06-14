# Automata Simulations

## Overview
This repository contains programs for simulating various computational models, including Finite Automata (FA), Pushdown Automata (PDA), and Turing Machines. The simulations are designed for different language acceptance criteria and operations.

## Implemented Automata

### Finite Automata (FA)
1. **Three Consecutive 1's FA**  
   - Accepts all strings over `{0,1}` containing three consecutive `1`s as a substring.
   - Simulated using a deterministic state transition mechanism.

2. **Exact Two or Three 1's FA**  
   - Accepts strings over `{0,1}` having exactly **two** or **three** occurrences of `1`.
   - Ensures no more or fewer than required ones.

3. **L1: First Two Characters Match Last Two**  
   - Accepts strings (length ≥ 4) over `{a,b}` where the first two characters match the last two.

4. **L2: Pattern a(a+b)b Acceptance**
   - Accepts strings over `{a,b}` following the pattern `a(a+b)*b`.

5. **EVEN-EVEN FA**  
   - Accepts strings with an **even number of a’s** and an **even number of b’s**.

6. **FA for Language Operations**  
   - Simulates:
     - **Union** of L1 and L2
     - **Intersection** of L1 and L2
     - **Concatenation** of L1 and L2

### Pushdown Automata (PDA)
7. **PDA for `{anbn | n > 0}`**  
   - Simulates a pushdown automaton accepting balanced strings of `a` followed by `b`.

8. **PDA for `{wXwr | w ∈ {a,b}*}`**  
   - Accepts strings where `w` is any sequence over `{a,b}`, `X` is a special symbol, and `wr` is the reverse of `w`.

### Turing Machines (TM)
9. **Turing Machine for `{anbncn | n > 0}`**  
   - Accepts strings where `a`, `b`, and `c` appear in equal numbers.

10. **Binary Increment Turing Machine**  
   - Performs binary number incrementation by **1**.
