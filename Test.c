int test2()
{

}

int test()
{
  return 10;
}

void main()
{
  int n;
  test();
  test2();
  n = test();
  printf("%d\n", n);
}

