#ifdef _KERNEL

int	 procfs_docurproc(PFS_FILL_ARGS);
int	 procfs_doosrel(PFS_FILL_ARGS);
int	 procfs_doproccmdline(PFS_FILL_ARGS);
int	 procfs_doprocdbregs(PFS_FILL_ARGS);
int	 procfs_doprocfile(PFS_FILL_ARGS);
int	 procfs_doprocfpregs(PFS_FILL_ARGS);
int	 procfs_doprocmap(PFS_FILL_ARGS);
int	 procfs_doprocmem(PFS_FILL_ARGS);
int	 procfs_doprocnote(PFS_FILL_ARGS);
int	 procfs_doprocregs(PFS_FILL_ARGS);
int	 procfs_doprocrlimit(PFS_FILL_ARGS);
int	 procfs_doprocstatus(PFS_FILL_ARGS);
int	 procfs_doproctype(PFS_FILL_ARGS);
int 	 ss1();

/* Attributes */
int	 procfs_attr_w(PFS_ATTR_ARGS);
int	 procfs_attr_rw(PFS_ATTR_ARGS);
int	 procfs_attr_all_rx(PFS_ATTR_ARGS);

/* Visibility */
int	 procfs_notsystem(PFS_VIS_ARGS);
int	 procfs_candebug(PFS_VIS_ARGS);

#endif /* _KERNEL */
