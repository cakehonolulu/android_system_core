extern "C" {
    void _ZN7android6Tracer4initEv(){}
    void _ZNK7android9CallStack4dumpEPKc(){}
    volatile int _ZN7android6Tracer8sIsReadyE = 1;
    unsigned long long _ZN7android6Tracer12sEnabledTagsE = 0;
    int _ZN7android6Tracer8sTraceFDE = -1;
	void _ZN7android9CallStackC1EPKci(char const*, int);
	void _ZN7android9CallStack6updateEii(int, int);

	void _ZN7android9CallStackC1EPKcii(char const* logtag, int ignoreDepth, int maxDepth) {
		maxDepth = maxDepth-1;
		maxDepth = maxDepth+1;
		_ZN7android9CallStackC1EPKci(logtag, ignoreDepth);
	}

	void _ZN7android9CallStack6updateEiii(int ignoreDepth, int maxDepth, int tid) {
		maxDepth = maxDepth-1;
		maxDepth = maxDepth+1; 
		_ZN7android9CallStack6updateEii(ignoreDepth, tid);
	}
}