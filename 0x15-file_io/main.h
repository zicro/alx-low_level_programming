{"payload":{"allShortcutsEnabled":false,"fileTree":{"0x15-file_io":{"items":[{"name":"0-read_textfile.c","path":"0x15-file_io/0-read_textfile.c","contentType":"file"},{"name":"1-create_file.c","path":"0x15-file_io/1-create_file.c","contentType":"file"},{"name":"100-elf_header.c","path":"0x15-file_io/100-elf_header.c","contentType":"file"},{"name":"2-append_text_to_file.c","path":"0x15-file_io/2-append_text_to_file.c","contentType":"file"},{"name":"3-cp.c","path":"0x15-file_io/3-cp.c","contentType":"file"},{"name":"README.md","path":"0x15-file_io/README.md","contentType":"file"},{"name":"main.h","path":"0x15-file_io/main.h","contentType":"file"}],"totalCount":7},"":{"items":[{"name":"0x00-hello_world","path":"0x00-hello_world","contentType":"directory"},{"name":"0x01-variables_if_else_while","path":"0x01-variables_if_else_while","contentType":"directory"},{"name":"0x02-functions_nested_loops","path":"0x02-functions_nested_loops","contentType":"directory"},{"name":"0x03-debugging","path":"0x03-debugging","contentType":"directory"},{"name":"0x04-more_functions_nested_loops","path":"0x04-more_functions_nested_loops","contentType":"directory"},{"name":"0x05-pointers_arrays_strings","path":"0x05-pointers_arrays_strings","contentType":"directory"},{"name":"0x06-pointers_arrays_strings","path":"0x06-pointers_arrays_strings","contentType":"directory"},{"name":"0x07-pointers_arrays_strings","path":"0x07-pointers_arrays_strings","contentType":"directory"},{"name":"0x08-recursion","path":"0x08-recursion","contentType":"directory"},{"name":"0x09-static_libraries","path":"0x09-static_libraries","contentType":"directory"},{"name":"0x0A-argc_argv","path":"0x0A-argc_argv","contentType":"directory"},{"name":"0x0B-malloc_free","path":"0x0B-malloc_free","contentType":"directory"},{"name":"0x0C-more_malloc_free","path":"0x0C-more_malloc_free","contentType":"directory"},{"name":"0x0D-preprocessor","path":"0x0D-preprocessor","contentType":"directory"},{"name":"0x0E-structures_typedef","path":"0x0E-structures_typedef","contentType":"directory"},{"name":"0x0F-function_pointers","path":"0x0F-function_pointers","contentType":"directory"},{"name":"0x10-variadic_functions","path":"0x10-variadic_functions","contentType":"directory"},{"name":"0x11-printf","path":"0x11-printf","contentType":"directory"},{"name":"0x12-singly_linked_lists","path":"0x12-singly_linked_lists","contentType":"directory"},{"name":"0x13-more_singly_linked_lists","path":"0x13-more_singly_linked_lists","contentType":"directory"},{"name":"0x14-bit_manipulation","path":"0x14-bit_manipulation","contentType":"directory"},{"name":"0x15-file_io","path":"0x15-file_io","contentType":"directory"},{"name":"README.md","path":"README.md","contentType":"file"}],"totalCount":23}},"fileTreeProcessingTime":10.326481,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":623193170,"defaultBranch":"main","name":"alx-low_level_programming-1","ownerLogin":"DM-DFE","currentUserCanPush":false,"isFork":true,"isEmpty":false,"createdAt":"2023-04-03T22:10:39.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/129403281?v=4","public":true,"private":false,"isOrgOwned":true},"refInfo":{"name":"main","listCacheKey":"v0:1680559846.777777","canEdit":false,"refType":"branch","currentOid":"f6eae89fd12093f02e7bcc16576f6a30a1e4bb7b"},"path":"0x15-file_io/main.h","currentUser":null,"blob":{"rawBlob":"#ifndef MAIN_H\n#define MAIN_H\n\n#include <stdio.h>\n#include <stdlib.h>\n#include <unistd.h>\n#include <fcntl.h>\n\nint _putchar(char c);\nssize_t read_textfile(const char *filename, size_t letters);\nint create_file(const char *filename, char *text_content);\nint append_text_to_file(const char *filename, char *text_content);\nvoid copy_file(const char *file_from, const char *file_to);\n\n\n#endif /* MAIN_H */\n","colorizedLines":["<span class=pl-k>#ifndef</span> <span class=pl-c1>MAIN_H</span>","<span class=pl-k>#define</span> <span class=pl-c1>MAIN_H</span>","","<span class=pl-k>#include</span> <span class=pl-s>&lt;stdio.h&gt;</span>","<span class=pl-k>#include</span> <span class=pl-s>&lt;stdlib.h&gt;</span>","<span class=pl-k>#include</span> <span class=pl-s>&lt;unistd.h&gt;</span>","<span class=pl-k>#include</span> <span class=pl-s>&lt;fcntl.h&gt;</span>","","<span class=pl-smi>int</span> <span class=pl-en>_putchar</span>(<span class=pl-smi>char</span> <span class=pl-s1>c</span>);","<span class=pl-smi>ssize_t</span> <span class=pl-en>read_textfile</span>(<span class=pl-k>const</span> <span class=pl-smi>char</span> <span class=pl-c1>*</span><span class=pl-s1>filename</span>, <span class=pl-smi>size_t</span> <span class=pl-s1>letters</span>);","<span class=pl-smi>int</span> <span class=pl-en>create_file</span>(<span class=pl-k>const</span> <span class=pl-smi>char</span> <span class=pl-c1>*</span><span class=pl-s1>filename</span>, <span class=pl-smi>char</span> <span class=pl-c1>*</span><span class=pl-s1>text_content</span>);","<span class=pl-smi>int</span> <span class=pl-en>append_text_to_file</span>(<span class=pl-k>const</span> <span class=pl-smi>char</span> <span class=pl-c1>*</span><span class=pl-s1>filename</span>, <span class=pl-smi>char</span> <span class=pl-c1>*</span><span class=pl-s1>text_content</span>);","<span class=pl-smi>void</span> <span class=pl-en>copy_file</span>(<span class=pl-k>const</span> <span class=pl-smi>char</span> <span class=pl-c1>*</span><span class=pl-s1>file_from</span>, <span class=pl-k>const</span> <span class=pl-smi>char</span> <span class=pl-c1>*</span><span class=pl-s1>file_to</span>);","","","<span class=pl-k>#endif</span> <span class=pl-c>/* MAIN_H */</span>"],"stylingDirectives":null,"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/DM-DFE/alx-low_level_programming-1/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/DM-DFE/alx-low_level_programming-1/security/dependabot","repoSecurityAndAnalysisPath":"/DM-DFE/alx-low_level_programming-1/settings/security_analysis","repoOwnerIsOrg":true,"currentUserCanAdminRepo":false},"displayName":"main.h","displayUrl":"https://github.com/DM-DFE/alx-low_level_programming-1/blob/main/0x15-file_io/main.h?raw=true","headerInfo":{"blobSize":"401 Bytes","deleteInfo":{"deletePath":null,"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"84cf8ec","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2FDM-DFE%2Falx-low_level_programming-1%2Fblob%2Fmain%2F0x15-file_io%2Fmain.h","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"16","truncatedSloc":"12"},"mode":"file"},"image":false,"isCodeownersFile":null,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","large":false,"loggedIn":false,"newDiscussionPath":"/DM-DFE/alx-low_level_programming-1/discussions/new","newIssuePath":"/DM-DFE/alx-low_level_programming-1/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/DM-DFE/alx-low_level_programming-1/blob/main/0x15-file_io/main.h","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/DM-DFE/alx-low_level_programming-1/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"DM-DFE","repoName":"alx-low_level_programming-1","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":true,"symbols":[]}},"csrf_tokens":{"/DM-DFE/alx-low_level_programming-1/branches":{"post":"CBBmAuRRYjB93T6MO9GbEUHPO_OqN2h_jN_v6X7ktDfyZqLrQJnDJ54E9tGZreLUE0NTJ27lf8Xk94pxRl6g7Q"}}},"title":"alx-low_level_programming-1/0x15-file_io/main.h at main · DM-DFE/alx-low_level_programming-1","locale":"en"}