#include "rsa/rsa.h"
#include "uart/uart.h"

extern uint32_t sram;

#define reg_uart_clkdiv (*(volatile uint32_t*)0x02000004)


void main()
{
  reg_uart_clkdiv = 139;
  struct public_key_class pub[1];
  struct private_key_class priv[1];

  priv->modulus = 728226539;
  priv->exponent = 461835209;
  pub->modulus = 728226539;
  pub->exponent = 257;


  char message[] = "123abc";

  print("Original:\n");
  print("\t");
  print(message);
  print("\n");

  long long *encrypted = rsa_encrypt(message, sizeof(message), pub);
  char *decrypted = rsa_decrypt(encrypted, 8*sizeof(message), priv);

  print("Decrypted:\n");
  print("\t");
  print(decrypted);
  print("\n");
}
