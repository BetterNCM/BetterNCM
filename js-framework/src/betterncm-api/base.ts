export const BETTERNCM_API_PATH = "http://localhost:3248/api";
export const BETTERNCM_FILES_PATH = "http://localhost:3248/local";
window.BETTERNCM_API_PATH = BETTERNCM_API_PATH;
window.BETTERNCM_FILES_PATH = BETTERNCM_FILES_PATH;
export const ncmFetch = (
	relPath: string,
	option?: RequestInit,
	withApiKey: boolean = false,
) => {
	if (option) {
		option.headers = option.headers ?? {};
		if (withApiKey) option.headers["BETTERNCM_API_KEY"] = BETTERNCM_API_KEY;
	} else {
		option={
			headers: withApiKey ? { BETTERNCM_API_KEY } : {},
		};
	}
	return fetch(BETTERNCM_API_PATH + relPath, option);
};
