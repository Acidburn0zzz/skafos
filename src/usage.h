#ifndef __CLI_USAGE__
#define __CLI_USAGE__

static const char USAGE[] =
R"(
Usage:
    skafos (setup|init|auth)...
    skafos init [<name>] [--template <template_name>] [--master]
    skafos templates [--update] [--search <search_term>]
    skafos env [<key>] [--set <value>] [--delete]
    skafos logs [<project_token>] [-n <num>] [--tail]
    skafos fetch --table <table_name>
    skafos kill [<project_token>] [--deployments <deployment_ids>] [--job_ids <job_ids>]
    skafos remote info [<project_token>]
    skafos -h | --help
    skafos -v | --version
Commands:
    setup         Setup development environment.
    init          Create a new project.
    auth          Authenticate request.
    templates     Manage templates.
    env           Get or set environment variables.
    logs          Get logs for a project.
    fetch         Fetch results from a given table.
    kill          Kill an entire project or specific jobs/deployments.
    remote info   Print command to add a new remote. 
Options:
    -v --version    Shows version.


If you need help, feel free to reach out:
    https://metismachine.com
    https://twitter.com/metismachine
    https://github.com/metismachine


Skafos is currently under a private beta but don't despair 
because we are offering an opportunity for you to get early access. 

Please go to https://metismachine.typeform.com/to/JzdHLh to make it so. 

Fire it up!
)";

#endif
