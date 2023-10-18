### Ora used to create Elegant animated terminal spinner
### Chalk used to change Terminal Color

```
npm i ora
npm i chalk
```

```
import ora from 'ora';
import chalk from 'chalk';
const spinner = ora('Check if File(data.md) Exists Or Not.').start();

spinner.succeed();

spinner.start('Check if File is Empty.');

spinner.succeed();

spinner.fail(chalk.red('Failed to create file.'));

```
