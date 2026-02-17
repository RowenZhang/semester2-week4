<!-- GitHub Copilot instructions tailored for the COMP1850 week-4 exercises repo -->
# COPILOT INSTRUCTIONS

Purpose
- Help contributors and AI agents work effectively on a small teaching repository of C exercises (arrays, strings, I/O).

Repository shape (quick):
- Exercises grouped by session in `session-*/task*/` directories. Each task usually contains `act*.md` (exercise description) and one or more `*.c` programs. See `README.md` for compilation reminder.

What to prioritize
- Preserve exercise descriptions in `act*.md`. Do not alter these unless explicitly asked by an instructor.
- Fix, refactor, or explain the C solutions in `*.c` files. Frequently used files: `session-1/task1/dot_product.c`, `session-2/task3/scanf_str.c`.

Build / run conventions
- No build system: compile single files with `gcc` (C11):
  - Example: `gcc -std=c11 -Wall -Wextra session-1/task1/dot_product.c -o dot_product`
  - Run: `./dot_product`

Common code patterns
- Small, single-file C programs with `main()` used for exercises.
- Frequent use of `scanf`, `printf`, arrays, pointers, and simple loops.
- Input is typically from stdin; avoid adding network, DB, or GUI code.

Suggested AI behaviors
- When asked to modify a `*.c` file, compile locally (or advise the user to compile) with the above flags and show minimal diffs that preserve teaching intent.
- If a function or behavior is unclear, reference the corresponding `act*.md` in the same task folder before changing behavior.
- Keep changes focused: prefer small, self-contained edits, and include a one-line rationale at the top of the PR or patch.

Examples of useful prompts
- "Refactor `session-1/task1/vector_add.c` to use a helper `add_vectors()` and keep CLI behavior identical."
- "Fix undefined behavior in `session-2/task3/scanf_str.c` and explain the root cause in one paragraph."
- "Add a minimal `Makefile` that compiles all `.c` files in `session-1/` into `bin/` preserving filenames."

Files to inspect first
- `README.md` (root) — explains compile/run expectations.
- `session-*/act*.md` — exercise requirements and expected I/O.
- Example implementations: `session-1/task1/dot_product.c`, `session-2/task6/matrix_add.c`.

Do not modify
- Student-facing instructions in `act*.md` unless instructed.
- Do not introduce external dependencies (no new libraries beyond std C) without confirming with the user.

If tests or automation are requested
- There are no existing test harnesses. Propose a small test runner (bash + gcc) and include example inputs/outputs.

When uncertain
- Ask a clarifying question: confirm whether changes are for pedagogy (improve clarity) or grading (preserve exact I/O).

Feedback
- After applying edits, show the compile command and run output for any changed program.

-- End of instructions --
