#include <stdio.h>
#include <string.h>

int main() {
  // Flush after every printf
  setbuf(stdout, NULL);

  // Uncomment this block to pass the first stage
  printf("$ ");

  // Wait for user input
  char input[100];
  fgets(input, 100, stdin);

  // Note: fgets() Captures the newline (\n). This would cause the output to be printed as,
  //       "invalid command:"
  //       "command not found"
  // So we remove the trailing newline character if present and replace with a null terminator.
  input[strcspn(input, "\n")] = '\0';  // lhs: strcspn returns the index position of "\n" in the string if
                                                  // found. rhs: assign that position the value '\0'. strcspn is provi-
                                                  // ded by <string.h>.
  printf("%s: command not found", input);

  return 0;
}
