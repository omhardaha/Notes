## UseFull Array Methods

### 1. existsSync
``` 
if (!fs.existsSync('./output')) {
    fs.mkdirSync('./output');
}
```

### 2. writeFileSync
``` 
try {
    writeFileSync(`./output/${fileName}`, validTables[0].results, 'utf8');
} catch (error) {
    spinner.fail(chalk.red('Failed to create file.'));
    console.log(error);
}
``` 