from distutils.core import setup
setup(name='flirtspendfrom',
      version='1.0',
      description='Command-line utility for flirtcoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@flirtcoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
